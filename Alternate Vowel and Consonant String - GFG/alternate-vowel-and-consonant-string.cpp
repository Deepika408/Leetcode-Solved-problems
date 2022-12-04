//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string S, int N)
    {
        // your code here
        
        vector<int> p(26, 0);
        for(auto i : S)
            p[i-'a']++;
        vector<pair<char, int>> vwl, cs;
         set<char> v = {'a', 'e', 'i', 'o', 'u'};
        int sumv = 0, sumc = 0;
       
        for(int i = 0 ; i < 26 ; i++)
        {
            if(p[i] == 0)
                continue;
            char ch = (i + 'a');
            if(v.count(ch))
            {
                vwl.push_back({ch, p[i]});
                sumv += p[i];
            }
            else
            {
                cs.push_back({ch, p[i]});
                sumc += p[i];
            }
        }
        
        if(abs(sumv - sumc) > 1)
            return "-1";
        string ans = "";
        if(sumv > sumc or (sumv == sumc  and vwl[0].first < cs[0].first))
        {
            int i = 0, j = 0, turn = 0;
            while(N--)
            {
                if(turn == 0)
                {
                    if(vwl[i].second == 0)
                        i++;
                    ans += vwl[i].first;
                    vwl[i].second--;
                    turn = 1 - turn;
                }
                else
                {
                    if(cs[j].second == 0)
                        j++;
                    ans += cs[j].first;
                    cs[j].second--;
                    turn = 1 - turn;
                }
            }
        }
        else
        {
            int i = 0, j = 0, turn = 1;
            while(N--)
            {
                if(turn == 0)
                {
                    if(vwl[i].second == 0)
                        i++;
                    ans += vwl[i].first;
                    vwl[i].second--;
                }
                else
                {
                    if(cs[j].second == 0)
                        j++;
                    ans += cs[j].first;
                    cs[j].second--;
                }
                turn = 1 - turn;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends