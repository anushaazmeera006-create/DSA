// // class Solution {
// // public:
// //     int longestOnes(vector<int>& nums, int k) {
// //         int sum =0;
// //         while(k!=0){
// //            for(int i =0;i<nums.size();i++){
                
            
// //                 if(nums[i]==0){
// //                     len=len+1;
// //                     k--;
// //                 }
// //                 else{
// //                     len = len+nums[i];
// //                 }
// //             }
            

// //            }
// //     }
// // };
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//        int zero = 0;
//        int l =0;
//        int r =0;
//        int maxlen =0;
//        int n = nums.size();
//        while(r<n){
//         if(nums[r]==0){
//             zero++;

//         }
//             if(zero>k){
//                 if(nums[l]==0){
//                     zero--;
//                 }
//                 l++;
//             }
//             if(zero<=k){
            
//             int len = r-l+1;
//           maxlen = max(maxlen,len);
//             }
//             r++;
//        } 
//        return maxlen;
//     }
// };
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int zero = 0;
       int l =0;
       int r =0;
       int maxlen =0;
       int n = nums.size();
       while(r<n){
        if(nums[r]==0){
            zero++;

        }
            while(zero>k){
                if(nums[l]==0){
                    zero--;
                }
                l++;
            }
            if(zero<=k){
            
            int len = r-l+1;
          maxlen = max(maxlen,len);
            }
            r++;
       } 
       return maxlen;   

    }
};


