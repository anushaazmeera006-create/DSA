# class Solution(object):
#     def moveZeroes(self, nums):
#         count=1
#         for i in range(len(nums)-1):
#           if nums[i]==0:
#             nums.pop(i)
#             count+=1
#         for i in count:
#             nums.append(0)
#         """
#         :type nums: List[int]
#         :rtype: None Do not return anything, modify nums in-place instead.
#         """
# class Solution(object):
#     def moveZeroes(self, nums):
#         n = len(nums)
#         for i in range(n):
#           if nums[i]==0:
#             for j in range(i,n-1):
#              nums[j],nums[j+1]=nums[j],nums[j+1]
            
class Solution(object):
    def moveZeroes(self, nums):
        n = len(nums)
        j=0
        for i in range(n):
            if nums[i] != 0:
                nums[j], nums[i] = nums[i], nums[j]
                j+=1