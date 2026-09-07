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
// class Solution {
// public:

//     int findNumbers(vector<int>& nums) {
//         int ct=0;
//         int ans=0;
//         vector<int>arr;
//       for(int i=0;i<nums.size();i++){
//         while(nums[i]!=0){
//            arr.push_back(nums[i]%10);
//               nums[i]=nums[i]/10;
              
//               }
//               ct= arr.size();
//               arr={0};
//             if(ct%2==0) {
//                 ans =ans+1;
//             } 
//       }
//     return ans;
//     }
// };
class Solution {
public:

    int findNumbers(vector<int>& nums) {
      int ct=0;
      for(int i=0;i<nums.size();i++){
        string s = to_string(nums[i]);
        if(s.size()%2==0){
            ct=ct+1;
        }
      }
    return ct;
    }
};