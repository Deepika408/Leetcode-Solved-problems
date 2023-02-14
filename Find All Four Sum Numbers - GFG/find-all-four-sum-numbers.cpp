//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int t=k;
        sort(arr.begin(),arr.end());
        vector<vector<int >> res;
        set<vector<int> >s;
        long long  n=arr.size();
        for(long long  i=0;i<n;i++)
        {
            //int j=i+1;
            for(long long  j=i+1;j<n;j++)
            {
            long long  k=j+1;
            long long  l=n-1;
            while(k<l)
            {
                long long  sum=arr[i]*1LL+arr[j]+arr[k]+arr[l];
                if(sum==t)
                {
                    s.insert({arr[i],arr[j],arr[k] ,arr[l]});
                    k++,l--;
                }
                else if(sum<t)
                {
                    k++;
                }
                else
                l--;
            }
        }
        }
       for(auto  itr :s)
       {
           res.push_back(itr);
       } 
       return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends