class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum =0;
      int mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum =0;
            }
          if(nums[i]==1){
            sum = sum+1;
          }
         mx=max(mx,sum);
        }
        return mx;
    }
};