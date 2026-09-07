// class Solution {
// public:
//   int divide(int x){
//     vector<int>arr;
//     while(x!=0){
//       arr.push_back(x%10);
//       x=x/10;
//     }
//     return arr.size();
//   }
//     int findNumbers(vector<int>& nums) {
//         int ct=0;
//       for(int i=0;i<nums.size();i++){
//           int ans = divide(nums[i]);
//              if(ans%2==0){
//                 ct=ct+1;
//              }
//       }
//       return ct;
//     }
// };
class Solution {
public:

    int findNumbers(vector<int>& nums) {
        
        int ans=0;
        vector<int>arr;
      for(int i=0;i<nums.size();i++){
        int ct=0;
        int x = nums[i];
        if(x==0){
            ct=1;
        }
        while(x!=0){
        
              x=x/10;
               ct=ct+1;
              }
              
              
            if(ct%2==0) {
                ans =ans+1;
            } 
      }
    return ans;
    }
};
// class Solution {
// public:

//     int findNumbers(vector<int>& nums) {
//       int ct=0;
//       for(int i=0;i<nums.size();i++){
//         string s = to_string(nums[i]);
//         if(s.size()%2==0){
//             ct=ct+1;
//         }
//       }
//     return ct;
//     }
// };