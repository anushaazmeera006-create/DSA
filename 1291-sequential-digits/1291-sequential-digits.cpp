class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
         vector<int> res;
        int l = low, h = high;

        int digitsLow = 0, digitsHigh = 0;

        while (l) {
            digitsLow++;
            l /= 10;
        }

        while (h) {
            digitsHigh++;
            h /= 10;
        }

         int ans=0;
         for(int len = digitsLow;len<=digitsHigh;len++){
         for(int i =1;i<=10-len;i++){
            ans=0;
            for(int j=i;j<i+len;j++){
                  ans =ans*10+j;
            }
                  if(ans>=low&&ans<=high){
                    res.push_back(ans);
                  }

            
         }
         }
         return res;
    }
};