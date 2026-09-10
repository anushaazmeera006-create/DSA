class Solution(object):
    def reverse(self,s):
        s=list(s)
        n = len(s)
        for i in range(n//2):
          temp = s[i]
          s[i]=s[n-i-1]
          s[n-i-1]=temp
        return "".join(s)
    def reverseWords(self, s):
        ans=""
        t=""
        for i in range(len(s)):
            
            if s[i]!= " ":
               t=t+s[i]
            else:
              ans =ans+self.reverse(t)+" "
              t=""
        ans=ans+self.reverse(t)
        return ans


        

