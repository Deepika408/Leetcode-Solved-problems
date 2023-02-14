#User function Template for python3

class Solution():
    def minCost(self, colors, N):
        a=b=c=0;
        for i in range(len(colors)):

            pnk=colors[i][0]+min(b,c)

            blk=colors[i][1]+min(a,c)

            ylw=colors[i][2]+min(a,b)

            a,b,c=pnk,blk,ylw

 

        return min(a,b,c)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ =="__main__":
    for _ in range(int(input())):
        n = int(input())
        colors = []
        for i in range(n):
            tmp = [int(i) for i in input().split()]
            colors.append(tmp)
        print(Solution().minCost(colors, n))
# } Driver Code Ends