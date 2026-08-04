class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<int>arr;
        int n = nums.size();
        for(int i =nums[0];i<nums[n-1];i++){
           // if(nums[i+1]!=nums[i]+1){
              arr.push_back(i);
            ///}
        }
        for(int i =0;i<nums.size();i++){
           // arr.erase(nums[i]);
           arr.erase(remove(arr.begin(), arr.end(), nums[i]), arr.end());
        }
        return arr;
    }
};