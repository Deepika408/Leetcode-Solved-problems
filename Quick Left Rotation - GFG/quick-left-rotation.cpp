//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    int a[n];
	    if(k>n)
	    k=k%n;
	    for(int i=0;i<n;i++)
	    {
	        if(i<k)
	        {
	            a[i]=arr[i];
	        }
	        else
	        {
	            arr[i-k]=arr[i];
	            
	        }
	        
	    }
	   for(int i=0;i<k;i++)
	    {
	        arr[(n-k)+i]=a[i];
	    }
	   // for(int i=0;i<n;i++)
	   // cout<<arr[i];
	   // Your code goes here
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends