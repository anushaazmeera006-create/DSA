// // tabulation tc: o(n),sc :o(1)
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//       int prev=nums[0];
//       int prev2=0;
//       for(int i=1;i<nums.size();i++){
//         int take =nums[i];
//         if(i>1){
//             take=take+prev2; // take =f(i)+f(i-2);
            
//         }
//         int nt= 0+prev;
//         int curr= max(take,nt);
//         prev2=prev;
//         prev =curr; 
//       }
//       return prev;
//     }
// };


   
class Solution {
public:
  int  func(int ind,vector<int>& nums,vector<int>&dp){
    if(ind==0){
        return nums[ind];

    }
    if(ind<0){
        return 0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
        int pick= nums[ind]+func(ind-2,nums,dp);
        int np= 0+func(ind-1,nums,dp);
        return dp[ind]=max(pick,np);
    }
    int rob(vector<int>& nums) {
     int n = nums.size();
     vector<int> dp(n,-1);
     return func(n-1,nums,dp);

    }
};