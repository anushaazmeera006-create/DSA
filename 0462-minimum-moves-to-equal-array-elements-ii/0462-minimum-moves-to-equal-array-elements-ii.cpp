class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int  n = nums.size();
        int mid = n/2;
        vector<int>arr;

        for(int i=0;i<n;i++){
            if(nums[i]<nums[mid]){
                arr.push_back(nums[mid]-nums[i]);
            }
            else{
                arr.push_back(nums[i]-nums[mid]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
          ans=ans+arr[i];  
        }
        return ans;
    }
};