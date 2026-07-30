class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int presum =0;
        int count=0;
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        for(int i =0;i<nums.size();i++){
            presum = presum+nums[i];
            int remove = presum-goal;
            count+=mpp[remove];
            mpp[presum]+=1;
        }
        return count;
    }
};