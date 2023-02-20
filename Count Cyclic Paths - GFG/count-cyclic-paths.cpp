//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
        // code here 
        long long  md=1000000007;
        long long p=0;
        
        if(N<2)
        return 0;
        int i=2;
        while(i<=N){
            p=(p*3)%md;
            if(i%2!=0) 
            p-=3;
            else 
            p=(p+3)%md;
            i++;
        }
        return p;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends