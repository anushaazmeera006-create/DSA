// class Solution {
// public:
//      int mx(vector<int> &nums,int n){
        
//         int maxi=nums[0];
//         int mini=nums[n];
//         for(int i=0;i<n;i++){
//             maxi = max(maxi, nums[i]);
//         }
//         for(int i=n;i<nums.size();i++){
//             mini = min(mini, nums[i]);
//         }
//         return maxi-mini;

//      }
//     int firstStableIndex(vector<int>& nums, int k) {
        

//         vector<int>arr;
//       for(int i=0;i<nums.size();i++){
//         arr.push_back(mx(nums,i));
//       }
//        int min =arr[0];
//       for(int i=1;i<arr.size();i++){
       
//         if(min>=arr[i]){
//             min = arr[i];
//         }
//       }
//       return min;
//     }
// };
class Solution {
public:

    int mx(vector<int>& nums, int n) {

        int maxi = nums[0];
        int mini = nums[n];

        // Find maximum on the left side
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }

        // Find minimum from n to the right side
        for(int i = n; i < nums.size(); i++) {
            mini = min(mini, nums[i]);
        }

        return maxi - mini;
    }

    int firstStableIndex(vector<int>& nums, int k) {

        vector<int> arr;

        // Calculate difference for every index
        for(int i = 0; i < nums.size(); i++) {
            arr.push_back(mx(nums, i));
        }

        // Find the first index whose difference is <= k
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};