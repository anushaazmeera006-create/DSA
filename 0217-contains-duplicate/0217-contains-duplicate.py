class Solution(object):
    def containsDuplicate(self, nums):
        mp ={}
        for x in nums:
          mp[x]=mp.get(x,0)+1
        for x in mp:
            if mp[x]>1:
                return True

        return False      
        """
        :type nums: List[int]
        :rtype: bool
        """
        