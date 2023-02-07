//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
 #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        
    vector<vector<ll>>ans(n);
   for(ll i=0;i<n;i++)
   {
       ans[i].resize(i+1,1);
   }

    for(ll i=2;i<n;i++)
    {
       for(ll j=1;j<ans[i].size()-1;j++)
       {
           ans[i][j]=(ans[i-1][j-1]
+ans[i-1][j])%1000000007;       }
    }
    vector< ll> res;
    for(ll i=0;i<n;i++)
    {
        ll temp=(ans[n-1][i])%1000000007;
        res.push_back(temp);
    }
    
      return res ;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends