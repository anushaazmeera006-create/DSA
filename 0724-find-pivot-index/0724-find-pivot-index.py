# class Solution(object):
#     def pivotIndex(self, nums):
#        n = len(nums)
#        prefix=[0]*len(nums)
#        ans=-1
#        sm=0
#     for i in range(n):
#             sm +=nums[i]
#             prefix[i]=sm
#     for i in range(n):
#         if i==0:
#             left =0
#             right=prefix[len(nums)-1]-prefix[0]
#             if left ==right:
#                 return 0
#         elif i==len(nums)-1:
#             left=prefix[len(nums)-2]
#             right=0
#             if left==right:
#                 return len(nums)-1
#         else:
#                 left = prefix[i-1]
#                 right = prefix[len(nums)-1]-prefix[i]
#                 if left==right:
#                   return i
                  
#     return -1

        
# # class Solution {
# # public:
# #     int pivotIndex(vector<int>& nums) {
# #         vector<int>prefix(nums.size());
# #         int ans=-1;
# #         int sum =0;
# #          for(int i=0;i<nums.size();i++){
# #              sum=sum+nums[i];
# #              prefix[i]=sum;
# #          }
# #          int left;
# #          int right;
# #          for(int i=0;i<nums.size();i++){
# #             if(i==0){
# #                 left =0;
# #                 right=prefix[nums.size()-1]-prefix[0];
# #                 if (left==right){
# #                     return 0;
# #                 }
# #             }
# #          else if(i==nums.size()-1){
# #                 left=prefix[nums.size()-2];
# #                 right =0;
# #                   if (left==right){
# #                     return nums.size()-1;
# #                 }  
# #             }
# #             else{
# #              left = prefix[i-1];
# #              right = prefix[nums.size()-1]-prefix[i];
# #             if(left==right){
# #                return i; 
# #             }
# #          }
# #          }
# #          return -1;
# #     }
# # };
class Solution(object):
    def pivotIndex(self, nums):
        n = len(nums)
        prefix = [0] * n
        
        sm = 0
        for i in range(n):
            sm += nums[i]
            prefix[i] = sm
        
        for i in range(n):
            if i == 0:
                left = 0
                right = prefix[n-1] - prefix[0]
                if left == right:
                    return 0
            
            elif i == n - 1:
                left = prefix[n-2]
                right = 0
                if left == right:
                    return n - 1
            
            else:
                left = prefix[i-1]
                right = prefix[n-1] - prefix[i]
                if left == right:
                    return i
        
        return -1