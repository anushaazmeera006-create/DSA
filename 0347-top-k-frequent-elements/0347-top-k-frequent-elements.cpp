// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int>mp;
//         vector<int>ans;
//        for(int i =0;i<nums.size();i++){
//         mp[nums[i]]++;

//        }
//        for(int x:mp){
//         if(mp[x]>=k){
//             ans.push_back(x);
//         }
//        }
//        return ans;
//     }
// };
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        vector<pair<int,int>> freq;

        for(auto x : mp) {
            freq.push_back({x.second, x.first});
        }

        sort(freq.rbegin(), freq.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};