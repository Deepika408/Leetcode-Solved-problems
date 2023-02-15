//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        // code here
        int target=X;
        sort(A,A+N);
        int cls=1e6;
        for(int i=0;i<N;i++)
        {
            int str=i+1;
            int end=N-1;
            while(str<end){
                int sum=A[i]+A[str]+A[end];
                if(sum<target)
                {
                    int d1=abs(cls-target);
                    int d2=abs(sum-target);
                    if(d2<d1){
                        cls=sum;
                    }
                    str++;
                }
                else if(sum>target)
                 {
                    int d1=abs(cls-target);
                    int d2=abs(sum-target);
                    if(d2<d1){
                        cls=sum;
                    }
                    end--;
                }
                else if(sum==target)
                {
                    cls=target;
                    break;
                }
            }
        }
        return cls;
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
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends