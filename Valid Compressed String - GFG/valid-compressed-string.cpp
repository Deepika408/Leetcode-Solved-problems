//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
               
        int n = S.length(), m = T.length();
         int P = 0, Q = 0;
        while(Q < m) 
        {
            if(isalpha(T[Q])) 
            {
                if(S[P] != T[Q])
                    return 0;
                Q++;
                P++;
            }
            else
            {
                string temp = "";
                while(Q < m && isdigit(T[Q])) 
                {
                    temp += T[Q];
                    Q++;
                }
                int temp2 = stoi(temp);
             
             
                P += (temp2);
            }
            
            if(P > n)
                return 0;
        }
        
        return 1;

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends