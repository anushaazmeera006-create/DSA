class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans =0;
        vector<int>arr;
        for(auto it :mp){
            if(it.second>(nums.size()/3)){
              ans =it.first;
               arr.push_back(ans);
            }
        }
        return arr;
    }
};