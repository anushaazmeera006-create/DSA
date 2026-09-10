class Solution(object):
    def singleNumber(self, nums):
        mp ={}
        for x in nums: 
          mp[x]=mp.get(x,0)+1
        for x in mp:  
            if mp[x]==1: 
                ans= x

        return ans    
        """
        :type nums: List[int]
        :rtype: int
        """
        