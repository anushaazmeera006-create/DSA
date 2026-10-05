
// class Solution {
// public:
// void swap(int &a ,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
//     void moveZeroes(vector<int>& nums) {
        
//         int n =nums.size();
//         int j=1;
//          int i=0;
//        while(j<n){
//          if(nums[i]==0&&nums[j]!=0){
//             swap(nums[i],nums[j]);
//               i++;
//               j++;
//          }
//          if(nums[i]==0&&nums[j]==0){
//             j++;
//          }
//          else{
//             i++;
//             j++;
//          }
//         }
//     }
// };
// // class Solution {
// // public:
// //     void moveZeroes(vector<int>& nums) {
        
// //         int n =nums.size();
// //         for(int i=0;i<nums.size();i++){
// //             if(nums[i]==0){
// //              nums.erase(nums.begin()+i);
// //             }
// //         }
// //         for(int i=0;i<=n-nums.size();i++){
// //             nums.push_back(0);
// //         }
// //     }
// // };
class Solution {
public:
    void swap(int &a, int &b){   // ✅ pass by reference
        int temp = a;
        a = b;
        b = temp;
    }

    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;

        while(j < n){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
                j++;   // ✅ move both
            }
            else if(nums[i] == 0 && nums[j] == 0){
                j++;   // ✅ move j
            }
            else {  
                i++;   // ✅ handle missing case
                j++;
            }
        }
    }
};
