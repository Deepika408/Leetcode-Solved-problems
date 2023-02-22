//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string dips = "";
        stack<string>stk;
        string str = "";
        for(int i=0; i<S.size(); i++){
            if(S[i]== '.')
            {
                if(!str.empty())
                    stk.push(str);
                str = "";
            }
            else
            {
                str += S[i];
            }
        }
        stk.push(str);

        while(!stk.empty())
        {
            if(!dips.empty())
                dips +='.';
            dips += stk.top();
            stk.pop();
        }
        return dips;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends