// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int max=0;
//         int i =0;
//   //     for(int i =0;i<nums.size();i++){
//   while(i<nums.size()&&j<nums.size()){
//         int j =nums.size-1;
//         if(nums[i]-1*nums[j]-1>max){
//           max =nums[i]-1*nums[j]-1;
         
//          j--
//         }
        

//        }
//     }
// };
class Solution {
public:
    int maxProduct(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int n = nums.size();
    return (nums[n-1]-1)*(nums[n-2]-1);
    }
};
