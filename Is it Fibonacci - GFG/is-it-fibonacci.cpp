//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
         int i=0;
        int j=K;
          vector<long long >v(GeekNum.begin(),GeekNum.end());
        long long count=0;
        for(int p=0;p<K;p++)
        {
            count+=GeekNum[p];
        }
        
        if(K==N)
        return v[K-1];
        
        v.push_back(count);
        j++;
        while(j<N)
        {
              count=count*2-v[i];
             v.push_back(count);
             i++;
             j++;
        }
       
    return v[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends