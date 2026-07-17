// class Solution {
// public:
// int gcd(int a,int b){
//     if(a==0||b==0){
//         return max(a,b);
//     }
//      int result = min(a,b);
//     while(result>0){
//     if(a%result==0&&b%result==0){
//         break;
//     }
//     result--;
//     }
//     return result;
    
// }
//     long long gcdSum(vector<int>& nums) {
//        vector<int>mx;
//        int max =nums[0];
//        for(int i =0;i<nums.size();i++){
//         if(nums[i]>max){
//             max = nums[i];
//             mx.push_back(max);
//         }
//        }
//      vector<int> prefix;
//         for(int i=0;i<nums.size();i++){
//          prefix.push_back(gcd(nums[i],mx[i]));

//         }
//        sort(prefix.begin(),prefix.end());
//        vector<int>sum;
//        int n =nums.size();
       
//        for(int i=0;i<n/2;i++){
//         if(n%2!=0&&i==n/2){
//             break;
//         }
//             sum.push_back(gcd(prefix[i],prefix[n-i-1]));

//        }
//        int ans=0;
//        for(int i=0;i<sum.size();i++){
//        ans = ans +sum[i];
//        }
//        return ans;
//     }
// };
class Solution {
public:
    // int gcd(int a, int b) {
    //     if (a == 0 || b == 0)
    //         return max(a, b);

    //     int result = min(a, b);
    //     while (result > 0) {
    //         if (a % result == 0 && b % result == 0)
    //             break;
    //         result--;
    //     }
    //     return result;
    // }
int gcd(int a, int b){
    while(b){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        // Prefix maximum
        vector<int> mx(n);
        mx[0] = nums[0];

        for (int i = 1; i < n; i++) {
            mx[i] = max(mx[i - 1], nums[i]);
        }

        vector<int> prefix;
        for (int i = 0; i < n; i++) {
            prefix.push_back(gcd(nums[i], mx[i]));
        }

        sort(prefix.begin(), prefix.end());

        vector<int> sum;

        for (int i = 0; i < n / 2; i++) {
            sum.push_back(gcd(prefix[i], prefix[n - i - 1]));
        }

        long long ans = 0;
        for (int x : sum) {
            ans += x;
        }

        return ans;
    }
};