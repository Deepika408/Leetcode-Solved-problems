//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
       
        
         unordered_map<int,int> mp;
        int sum=0,ans=0;
       
        for(int i=0;i<N;i++){
            sum += A[i];
            int find=sum-K;
            if(sum==K)
             ans=max(ans,i+1);
            if(mp.find(find) != mp.end())
                 ans=max(ans,i-mp[sum-K]);

            if(mp.find(sum)==mp.end()){

                mp[sum]=i;

            }
        }
        return ans;
        // Complete the function
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends