//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int n=nums.size();
	     int count = 0;
        int l ,r;
	      if (n < 3)
	      return 0;
        
       
        
        for (int i = 1; i < n - 1; i++) {
            
            l= 0;
            r = 0;
            
            for (int j = 0; j < n; j++) {
                
                if (i < j && nums[i] < nums[j])
                l++;
                else if (j < i && nums[j] < nums[i])
                r++;
                
                }  
                
                count += l* r;
            }
        
        return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends