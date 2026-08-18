// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         long long ans =1;
//         long long ans1 =1;
//        //   vector<long long>arr;
//      int zero=1;
//         // for(int i=0;i<nums.size();i++){
//         //       ans = ans*nums[i];
//         // }
//          for(int i=0;i<nums.size();i++){
//            if(nums[i]==0){
//                zero++;
//            }
//         }

//         if(zero==1){
//           for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0){
//               ans1 = ans1*nums[i];
//                 //   arr.push_back(0);
//             }
          
//         }
//         }
//         else if(zero>1){
//             return vector<int>(nums.size(),0);
//         }
//         else{
//          for(int i=0;i<nums.size();i++){
        
//               ans = ans*nums[i];
          
//         }
//         }
//         vector<int>arr;
//        if(zero==0){
//         for(int i=0;i<nums.size();i++){
//         arr.push_back(ans/nums[i]);
//         }
//        }
//        else{
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
             
//                    arr.push_back(ans1);
//             }
//            arr.push_back(0);
//         }
//        }
//      return arr;
//     }
// };
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long ans = 1;
        long long ans1 = 1;
        int zero = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                zero++;
        }

        if(zero == 1) {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != 0)
                    ans1 *= nums[i];
            }
        }
        else if(zero > 1) {
            return vector<int>(nums.size(), 0);
        }
        else {
            for(int i = 0; i < nums.size(); i++)
                ans *= nums[i];
        }

        vector<int> arr;

        if(zero == 0) {
            for(int i = 0; i < nums.size(); i++)
                arr.push_back(ans / nums[i]);
        }
        else {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0)
                    arr.push_back(ans1);
                else
                    arr.push_back(0);
            }
        }

        return arr;
    }
};