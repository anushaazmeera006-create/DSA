// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int presum =0;
//         int count=0;
//         unordered_map<int,int> mpp;
//         mpp[0] = 1;
//         for(int i =0;i<nums.size();i++){
//             presum = presum+nums[i];
//             int remove = presum-goal;
//             count+=mpp[remove];
//             mpp[presum]+=1;
//         }
//         return count;
//     }
// };
class Solution {
public:
int atmost(vector<int>& nums, int goal){
     if(goal<0){
            return 0;
        }
     int l =0;
     int r=0;
     int sum =0;
     int cnt=0;
      while(r<nums.size()){
        sum=sum+nums[r];
        while(sum>goal){
            sum =sum-nums[l];
            l++;
        }
       cnt=cnt+(r-l+1);
        r++;
      }
      return cnt;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
      return  atmost(nums,goal)-atmost(nums,goal-1);
    }
};