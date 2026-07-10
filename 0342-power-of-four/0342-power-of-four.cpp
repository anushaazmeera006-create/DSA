// class Solution {
// public:
//     bool isPowerOfFour(int n) {
        
//         while(n/4>=0){
//             n=n/4;
//         }
        
//         return n==0;
        
//     }
// };
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        while (n % 4 == 0) {
            n /= 4;
        }

        return n == 1;
    }
};