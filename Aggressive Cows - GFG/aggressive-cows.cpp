//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool check(vector<int> &st,int k,int n,int  mid)
  {
      int count=0;
      int init=st[0];
      for(int i=1;i<n;i++)
      {
          if(st[i]-init>=mid)
          {
              count++;
              init=st[i];
          }
      }
      count++;
      if(count>=k) return true;
      return false;
      
  }
    int solve(int n, int k, vector<int> &stalls) {
        
          // Write your code here
    
        if(stalls.size()<n) return -1;
        int m=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<stalls.size();i++)
        {
            m=max(m,stalls[i]);
            mn=min(n,stalls[i]);
        }
        sort(stalls.begin(),stalls.end());
        
        int l=0;
        int r=m-mn;
        int ans;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(check(stalls,k,n,mid))
            {
                ans=mid;
                 l=mid+1;
                 
            }
            else
            {
                r=mid-1;
            }
        }
        return ans;
    }
    
      
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends