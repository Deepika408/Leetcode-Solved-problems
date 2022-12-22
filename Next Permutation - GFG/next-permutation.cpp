//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
         int p,q;
        for( p=N-2;p>=0;p--)
        {
            if(arr[p]<arr[p+1])
            break;
        }
        if(p<0)
        {
        reverse(arr.begin(),arr.end());
        return arr;
        }
        else
        {
            for( q=N-1;q>p;q--)
            {
                if(arr[q]>arr[p])
                break;
            }
            swap(arr[p],arr[q]);
            reverse(arr.begin()+p+1,arr.end());
            return arr;
        }
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends