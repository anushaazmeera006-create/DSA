// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         int sum5=0;
//         int sum10=0;
//         sort(bills.begin(),bills.end());
//                 for(int i =0;i<bills.size();i++) {
//              if(bills[i]==5){
//                sum5++;
//              }
//              if(bills[i]==10){
//                 if(sum5!=0){
//                     sum5--;
//                     sum10++;
//                 }
//                 return 0;
//              }
//              if(bills[i]==20){
//                 if(sum5!=0&&sum10!=0){
//                     sum5--;
//                     sum10--;
//                     if(i==bills.size()-1){
//                         return true;
//                     }
//                 }
//                else{
//                 return 0;
//                }
//              }
//         }
//         return 1;
//     }
// };
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int sum5 = 0;
        int sum10 = 0;

        for (int i = 0; i < bills.size(); i++) {

            if (bills[i] == 5) {
                sum5++;
            }

            else if (bills[i] == 10) {
                if (sum5 > 0) {
                    sum5--;
                    sum10++;
                }
                else {
                    return false;
                }
            }

            else { // bill = 20

                if (sum10 > 0 && sum5 > 0) {
                    sum10--;
                    sum5--;
                }
                else if (sum5 >= 3) {
                    sum5 -= 3;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};