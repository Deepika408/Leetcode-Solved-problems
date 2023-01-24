//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
 void convert(int arr[], int n) {
     int a[n];
     for(int i=0;i<n;i++)
     {
         a[i]=arr[i];
     }
     sort(a,a+n);
     unordered_map<int,int>dev;
     for(int i=0;i<n;i++)
     {
         dev[a[i]]=i;
     }
     for(int i=0;i<n;i++)
     {
         arr[i]=dev[arr[i]];
     }}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends