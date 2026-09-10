class Solution(object):
    def majorityElement(self, nums):
        k = len(nums)/2
        mp={}
        for x in nums:
          mp[x]=mp.get(x,0)+1
        for x in mp:
            if mp[x]>k:
               ans= x
        return ans
        """
        :type nums: List[int]
        :rtype: int
        """
        