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
       sort(A, A+N);

        int ans = 1e9;

        for(int i=0; i<N; i++){

            int j = i+1;

            int k = N-1;

            

            while(j < k){

                int sum = A[i] + A[j] + A[k];

                if(sum < X){

                    int diff_1 = abs(ans - X);

                    int diff_2 = abs(sum - X);

                    if(diff_2 < diff_1)
                    {

                        ans = sum;

                    }

                    j++;

                }

                else if(sum > X)
                {

                    int diff_1 = abs(ans - X);

                    int diff_2 = abs(sum - X);

                    if(diff_2 < diff_1)
                    {

                        ans = sum;

                    }

                    k--;

                }

                else if(sum == X)
                {

                    ans = X;

                    break;

                }

            }

        }

        return ans;  
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