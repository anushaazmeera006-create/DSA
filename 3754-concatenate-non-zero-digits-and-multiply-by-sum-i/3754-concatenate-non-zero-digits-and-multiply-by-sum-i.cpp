// class Solution {
// public:
//     long long sumAndMultiply(int n) {
//         vector<int> arr;
//         int val =0;
//         int temp=n;
//       // for(int i =0;i<n;i++){
//         while(temp>0){
//        arr.push_back(temp%10);
//         val = val+temp%10;
//         temp=temp/2;
        
       
//        }
//        long long  ans =0;
//        for(int i =arr.size()-1;i>=0;i--){
//         ans= ans*10+arr[i];
//        }
//        return ans*val;
//     }
// };
class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> arr;
        int val = 0;
        int temp = n;

        while (temp > 0) {
            if(temp%10!=0){
            arr.push_back(temp % 10);
            val = val + temp % 10;
            }
            temp = temp / 10;
        }

        long long ans = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            ans = ans * 10 + arr[i];
        }

        return ans * val;
    }
};