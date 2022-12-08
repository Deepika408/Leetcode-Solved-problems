//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
         long long  n=piles.size();
        sort(piles.begin(),piles.end());
        long long  s=1;
        long long  end=piles[n-1];
         long long  m=0;
         while(s<end){
              long long  sum=0;
             long long  m=(s+end)/2;
         for(long long  i=0;i<n;i++)
         {
             sum=sum+((piles[i]+m-1)/m);

         }
         if(sum>H)
         s=m+1;
         else
         {
         end =m;
         }
         }

        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends