//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class GFG{
	public static void main(String [] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int test = Integer.parseInt(br.readLine());
		while(test-- > 0) {
			String [] str = br.readLine().trim().split(" ");
			int N = Integer.parseInt(str[0]);
			int Q = Integer.parseInt(str[1]);
			int [][] U = new int[Q][3];
			int i = 0;
			while(i < Q) {
				str = br.readLine().trim().split(" ");
				U[i][0] = Integer.parseInt(str[0]);
				U[i][1] = Integer.parseInt(str[1]);
				U[i][2] = Integer.parseInt(str[2]);
				i++;
			}
			Solution obj = new Solution();
			int [] arr = obj.updateQuery(N, Q, U);
			for(int j: arr) {
				System.out.print(j+" ");
			}
			System.out.println();
		}
	}
}
// } Driver Code Ends


//User function Template for Java

class Solution{
	int [] updateQuery(int N, int Q, int [][]U){
        //Write your code here
         int dips[] = new int[N];
        for(int p=0;p<Q;p++)
        {
            int l = U[p][0];
            int r = U[p][1];
            int x = U[p][2];
            
            for(int i=l-1;i<r;i++){
                dips[i] = dips[i] | x ;
            }
        }
        return dips;
    }
}