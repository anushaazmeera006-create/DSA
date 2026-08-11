// class Solution {
// public:
//     int missingInteger(vector<int>& nums) {
//         vector<int>arr;
//         for(int i =0;i<nums.size();i++){
           
//             if(nums[i-1]+1==nums[i]){

//                 arr.push_back(nums[i]);
//             }
//             else {
//                 break;
//             }
//         }
//         int sum =0;
//         for(int i =0;i<arr.size(),i++){
//               sum =sum+arr[i];

//         }

//         int ans=sum;
//         sort(nums.begin(),nums.end());
//         for(int i =0;i<nums.size();i++){
//             if(nums[i]>=sum){
//                  if(nums[i]==sum){
//                     sum++:
//                  }
//                     else{
//                      break;
//                     }
//             }
 
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int> arr;

        arr.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i])
                arr.push_back(nums[i]);
            else
                break;
        }

        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
        }

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=sum){
                if(nums[i]==sum)
                    sum++;
                else
                    break;
            }
        }

        return sum;
    }
};