//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      map<int ,int>mp;
      int count=0, t=arr[0];
      int mx=0;
      
      for(int i=0;i<N;i++)
      {
          mp[arr[i]]++;
      }
      for(auto it:mp)
      {
          if(it.first==t)
          {
              count++;
              mx=max(mx,count);
              t++;
          }
          else
          {
          count=1;
          t=it.first;
          t++;
          }
      }
      return mx;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends