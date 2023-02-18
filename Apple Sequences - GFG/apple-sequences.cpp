//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
          int i=0,j=0,k=0,len=0;
     
     while(i<n)
     {
         if(arr[i]=='A')
         {
             
             len=max(len,i-k+1);
         }
        else if(arr[i]=='O' && j<m)
         {
             
             len=max(len,i-k+1);
             j++;
         }
         else{
             while(arr[k]=='A')
             {
                 k++;
             }
             k++;
             
         }
       
         i++;
     }
     return len;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends