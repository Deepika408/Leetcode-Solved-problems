//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> dips(V+5, INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; // store distance and node
        dips[S] = 0;
        pq.push({0, S});
        while(!pq.empty()) {
            int node = pq.top().second;
            int dips_curr = pq.top().first;
            pq.pop();
            for(auto& it: adj[node]) {
                int nxt_dips = dips_curr + it[1];
                if(dips[it[0]]>nxt_dips) {
                    dips[it[0]] = nxt_dips;
                    pq.push({nxt_dips, it[0]});
                }
            }
        }
        return dips;
    }
    int shortestPath(int n, int m, int a, int b, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj[n+5];
        for(auto& x: edges) 
        {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        vector<int> dipsa = dijkstra(n, adj, a);
        vector<int> dipsb = dijkstra(n, adj, b);
        int ans = dipsa[b];
        for(auto x: edges)
        {
            if(dipsa[x[0]]!=INT_MAX && dipsb[x[1]]!=INT_MAX) 
            {
                int now = dipsa[x[0]] + dipsb[x[1]] + x[3]; 
                ans = min(ans, now);
            }
            swap(x[0], x[1]);
            if(dipsa[x[0]]!=INT_MAX && dipsb[x[1]]!=INT_MAX)
            {
                int now = dipsa[x[0]] + dipsb[x[1]] + x[3]; 
                ans = min(ans, now);
            }
        }
        return ans==INT_MAX ? -1 : ans;
   
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,a,b;
        cin>>n>>m;
        cin>>a>>b;
        
        vector<vector<int>> edges;
        
        for(int i=0; i<m; i++)
        {
            int u,v,x,y;
            cin>>u>>v>>x>>y;
            edges.push_back({u,v,x,y});
        }

        Solution ob;
        cout << ob.shortestPath(n,m,a,b,edges) << endl;
    }
    return 0;
}
// } Driver Code Ends