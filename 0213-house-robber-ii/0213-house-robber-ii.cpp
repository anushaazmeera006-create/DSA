// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         vector<int>arr;
//         int ans1;
//         int ans2;
       
//            int prev=arr[0];
//       int prev2=0;
//       for(int i=0;i<=arr.size()-2;i++){
//         int take =arr[i];
//         if(i>1){
//             take=take+prev2; // take =f(i)+f(i-2);
            
//         }
//         int nt= 0+prev;
//         int curr= max(take,nt);
//         prev2=prev;
//         prev =curr; 
//       }
//       ans1= prev;   
//            int prev1=arr[1];
//       int prev12=0;
//       for(int i=1;i<=arr.size()-1;i++){
//         int take =arr[i];
//         if(i>1){
//             take=take+prev12; // take =f(i)+f(i-2);
            
//         }
//         int nt= 0+prev1;
//         int curr= max(take,nt);
//         prev12=prev1;
//         prev1 =curr; 
//       }
//       ans2= prev1;
//       return max(ans1,ans2);
//     }
// };
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        int prev = nums[0];
        int prev2 = 0;

        for(int i = 1; i <= n - 2; i++) {
            int take = nums[i] + prev2;
            int nt = prev;
            int curr = max(take, nt);

            prev2 = prev;
            prev = curr;
        }

        int ans1 = prev;

        int prev1 = nums[1];
        int prev12 = 0;

        for(int i = 2; i <= n - 1; i++) {
            int take = nums[i] + prev12;
            int nt = prev1;
            int curr = max(take, nt);

            prev12 = prev1;
            prev1 = curr;
        }

        int ans2 = prev1;

        return max(ans1, ans2);
    }
};