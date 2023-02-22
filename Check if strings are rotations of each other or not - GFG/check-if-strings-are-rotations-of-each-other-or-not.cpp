//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
           if(s1==s2)
       {
           return true;
       }

        if(s1.size()!=s2.size())
       {
           return false;
       }
      
        s2 = s2+s2;
        int find = s2.find(s1);
        
       if(s2.size()>=find)
       {
           return true;
       }
       return false;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends