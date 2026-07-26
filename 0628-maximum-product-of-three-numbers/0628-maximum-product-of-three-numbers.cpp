// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         return max(nums[n-1]*nums[n-2]*nums[n-3],
//                    nums[n-1]*nums[0]*nums[1]);
//     }
// };
// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//      sort(nums.begin(),nums.end());
//      int val;

//      int count=0;
//        int n = nums.size();
//      for(int i =0;i< nums.size();i++){
//         if(nums[i]<0){
//             count++;
//         }
//      }
    
//           if(count>1&&(count!=n)){
        
//                 val= nums[0]*nums[1]*nums[nums.size()-1];

//         }

//             else{
//                  val = nums[n-3]*nums[n-2]*nums[n-1];
//             }
     
   
//             return val;
//             }
// };
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int val1 = nums[0] * nums[1] * nums[n - 1];
        int val2 = nums[n - 3] * nums[n - 2] * nums[n - 1];

        if (val1 > val2) {
            return val1;
        }
        return val2;
    }
};