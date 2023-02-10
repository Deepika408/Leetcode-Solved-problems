class Solution:
    def maxInstance(self, s : str) -> int:
        # code here
        b = s.count('b')
        a = s.count('a')
        l = s.count('l')
        o = s.count('o')
        n = s.count('n')
        if min(b,a,n) < min(l,o)//2:
            return (min(b,a,n))
        else:
            return  (min(l,o)//2)
        

#{ 
 # Driver Code Starts
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        s = (input())
        
        obj = Solution()
        res = obj.maxInstance(s)
        
        print(res)

# } Driver Code Ends