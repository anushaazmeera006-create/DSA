// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         int n = ratings.size();
//         int count = ratings.size();
//         int mx =0;
//         vector<int>arr;
//         for(int i =1;i<ratings.size();i++){
//           if(ratings[i-1]>ratings[i]){
//             mx = max(count++,mx);
//             arr.push_back(mx);
//           }
//           else{
//             arr.push_back(0);
//           }
//         }

//         for(int i =0;i<n-1;i++){
//           if(ratings[n-i-2]>ratings[n-i-1]){
//             count++;
//           }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if (n == 1) {
            return 1;
        }
        vector<int> ans(n, 1);
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                ans[i] = ans[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                ans[i] = max(ans[i], ans[i + 1] + 1);
            }
        }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};