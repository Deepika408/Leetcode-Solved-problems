//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
     bool check_fun(vector<int>&arr,int indx,vector<bool>&dp,vector<bool>&vis)
    {
        if(indx<0||indx>=arr.size())
        return true;
        if(dp[indx])
        return true;
        if(vis[indx])
        return false;
        vis[indx] = 1;
        dp[indx] = check_fun(arr,indx+arr[indx],dp,vis);
        return dp[indx];
    }
    int goodStones(int n,vector<int> &arr){
        vector<bool>dp(n,0);
        vector<bool>vis(n,0);
        for(int i=0;i<n;i++)
        {
            check_fun(arr,i,dp,vis);    
        }
        
        int count = 0;
        for(auto it:dp)
        {
            if(it)count++;
        }
        return count;
        // Code here
    }  
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends