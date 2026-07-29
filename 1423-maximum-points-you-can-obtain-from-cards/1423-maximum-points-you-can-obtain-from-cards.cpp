// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n = cardPoints.size();
//         int l=0;
//         int r=n-1;
//         int maxsum =0;
//         int sum =0;
        
//        while(k!=0){
//        int lsum = sum+cardPoints[l];
//        int rsum = sum+cardPoints[r];

//        if(lsum<=rsum){
//         r--;
//         sum = rsum;
//        }
//        else{
//         l++;
//         sum =lsum;
//        }
//        k--;
//        }
//      return sum;
//     }
// };
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int sum =0;
         int i =0;
         int fsum =0;
       while(i<k){
        sum =sum+cardPoints[i];
        i++;
       }
       fsum = sum;
        int j = n-1;
        i=k-1;
        while(i>=0){
          sum = sum-cardPoints[i];
          sum= sum+cardPoints[j];
   
        fsum= max(fsum,sum);
           j--;
          i--;
       }
       return fsum;
    }
};