// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//        int n = nums.size();
//         int i = 0;
//         int j = 1;
//         int count=0;
//     int prev;
//         while(j < n){
//           if(nums[i]==nums[j]){
//              prev = nums[j];
//             i++;
//             j++;
           
//           }
//           if(nums[i]<nums[j]&&(prev !=nums[j])){
//              prev = nums[j];
//             swap(nums[i],nums[j]);
            
//             j++;
            
//           }
//         }
//       for(int i=0;i<nums.size();i++){
//         if(nums[i]==nums[i+1]){
//             count++;
//         }
//       }
//       return count;
//     }
// };
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
                int n = nums.size();
        if(n == 0) return 0;
    
        int i = 0;
        int j = 1;
        int count=0;
        //for(int i=0;i<n;i++){
        while(j<n){
            if(nums[i]!=nums[j]){
                  i++;
              nums[i]=nums[j];
            
            }
            j++;
            count =i;
        }
     return count+1;
    }
};
