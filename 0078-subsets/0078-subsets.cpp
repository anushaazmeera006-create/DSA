// class Solution {
// public:
// void subset(int ind,vector<int>ds,vector<int>arr,int n,vector<vector<int>> ans){
//         if(ind ==n){
//           ans.push_back(ds);
//           return;
//         }

        
      
//         subset(ind+1,ds,arr,n,ans);
//         ds.push_back(arr[ind]);
//       subset(ind+1,ds,arr,n,ans);
//         ds.pop_back();
// }
//     vector<vector<int>> subsets(vector<int>& nums) {
//      vector<vector<int>> ans;
//      vector<int> ds;
//      int n = nums.size();
//      subset(0,ds,nums,n,ans);
//      return ans;
//     }
// };
class Solution {
public:
    void subset(int ind, vector<int>& ds, vector<int>& arr, int n,
                vector<vector<int>>& ans) {

        if (ind == n) {
            ans.push_back(ds);
            return;
        }

        // Not take
        subset(ind + 1, ds, arr, n, ans);

        // Take
        ds.push_back(arr[ind]);
        subset(ind + 1, ds, arr, n, ans);
        ds.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        subset(0, ds, nums, nums.size(), ans);
        return ans;
    }
};