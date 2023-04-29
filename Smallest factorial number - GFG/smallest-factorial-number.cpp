//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    int numfive(int t)
    {
        
        int ans=0;
        while(t)
        {
            ans+= t/5;
            t=t/5;
        }
        return ans;
    }
    public:
        int findNum(int n)
        {
           int s=0;
           int end=n*5;
           int mid=s-(s-end)/2;
           int ans;
           while(s<=end)
           {
               int temp=numfive(mid);
               if(temp>=n)
               {
                   ans=mid;
                  // return ans;
                  end=mid-1;
               }
               else
               {
                   s=mid+1;
               }
          
               mid=s-(s-end)/2;
           }
           return ans;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends