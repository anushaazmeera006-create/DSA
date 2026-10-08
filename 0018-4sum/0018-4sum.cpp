class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> ans;
         int n = nums.size();
         sort(nums.begin(),nums.end());
   for(int p=0;p<n;p++){   
    if (p > 0 && nums[p] == nums[p-1]) {
    continue;
        }
    for(int i=p+1;i<nums.size();i++){
     if(i>p+1&& nums[i]==nums[i-1]){
        continue;
     }
     int j = i+1;
     int k = n-1;
     while(j<k){
      //  int sum = nums[p]+nums[i]+nums[j]+nums[k] ;
      long long sum = (long long)nums[p] + nums[i] + nums[j] + nums[k];
        if(sum<target){
              j++;
        }
        else if(sum>target){
           k--;
        }
        else{
            vector<int>arr={nums[p],nums[i],nums[j],nums[k]};
            ans.push_back(arr);
            j++;
            k--;
               while(j<k&&nums[j]==nums[j-1]){
                      j++;
               }
               while(j<k && nums[k]==nums[k+1]){
                k--;
               }
        }
     }
    }
   }
    return ans;   
    }
};