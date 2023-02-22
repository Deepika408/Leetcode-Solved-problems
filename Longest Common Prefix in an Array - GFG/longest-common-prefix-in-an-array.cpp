//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
          string dips="";
       // int n=strs.size();
        for(int i=0;i<arr[0].length();i++)
        {
            char ch=arr[0][i];
            bool match=true;

            for(int p=1;p<N;p++)
            {
               if(arr[p].size()<i||ch!=arr[p][i])
               {
                   match=false;
                   break;
               } 
            }
            if(match==false)
            break;
            else
            dips.push_back(ch);
        }
        if(dips.empty())
        dips+="-1";
        return dips;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends