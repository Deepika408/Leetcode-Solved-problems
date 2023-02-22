//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
          int n=s.size();
        int count=0;
        string dips="";
        for(int i=0;i<n;i++){
                if(s[i]=='('){
                    if(count>0){ dips+=s[i];}
                    count++;
                    }
                else{
                    if(count>1){ dips+=s[i];}
                    count--;
                    }
            }
        return dips;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends