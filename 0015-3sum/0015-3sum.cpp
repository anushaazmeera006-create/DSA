// // class Solution {
// // public:
// //     vector<vector<int>> threeSum(vector<int>& nums) {
// //         vector<vector<int>> ans;
// //         int sum=0;
// //          unordered_map<int, int> mp;
// //      for(int j=0;j<nums.size();j++){
// //         for(int i = j+1; i < nums.size(); i++) {
// //               sum = nums[i]+nums[j];
// //             int y =  - sum;

// //             if(mp.find(y) != mp.end()) {
// //                 arr.push_back(nums[i],nums[j],y);
// //             }
              
// //            ans.push_back(arr);
// //         }
// //      }

// //         return ans;       
// //     }
// // };
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;

//         int n = nums.size();
//           set<vector<int>>st;
//         for(int j = 0; j < n; j++) {
//             set<int>hashst;

//             for(int i = j + 1; i < n; i++) {
//                 int sum = nums[i] + nums[j];
//                 int y = -sum;
                   
//                 if(hashst.find(y) != hashst.end()) {
//                    // ans.push_back({nums[i], nums[j], y});
//                     vector<int>temp =  {nums[i], nums[j], y};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//               hashst.insert(nums[i]);
               
//             }
//         }
//         vector<vector<int>>arr1(st.begin(),st.end());
//        return arr1;
        
//     }
// };
//time complexity
// logn+n+o(n2)
// optimal 
// i j .................k
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> ans;
         int n = nums.size();
         sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
     if(i>0&& nums[i]==nums[i-1]){
        continue;
     }
     int j = i+1;
     int k = n-1;
     while(j<k){
        int sum = nums[i]+nums[j]+nums[k];
        if(sum<0){
              j++;
        }
        else if(sum>0){
           k--;
        }
        else{
            vector<int>arr={nums[i],nums[j],nums[k]};
            ans.push_back(arr);
            j++;
            k--;
               while(j<k&&nums[j]==nums[j-1]){
                      j++;
               }
               while(j<k && nums[k]==nums[k+1]){
                k--;
               }
        }
     }
    }
    return ans;
    }
};