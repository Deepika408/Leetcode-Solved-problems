//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
        // Code here
      
    
         void MakeZeros(vector<vector<int> >& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int> >rand=matrix;
        for(int x=0;x<m;x++)
        {
            for(int y=0;y<n;y++)
            {
                if(rand[x][y]==0)
                {
                    if(x-1>=0)
             {
                 matrix[x][y]+=rand[x-1][y];
                 matrix[x-1][y]=0;
                 }
                  if(x+1<m)
             {
                 matrix[x][y]+=rand[x+1][y];
                 matrix[x+1][y]=0;
                 }
                  if(y-1>=0)
             {
                 matrix[x][y]+=rand[x][y-1];
                 matrix[x][y-1]=0;
                 }
                  if(y+1<n)
             {
                 matrix[x][y]+=rand[x][y+1];
                 matrix[x][y+1]=0;
                 }
                }
            }
        }
       
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends