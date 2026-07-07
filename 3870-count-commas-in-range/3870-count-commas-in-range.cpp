class Solution {
public:
    int countCommas(int n) {
        vector<int>arr;
        int temp =n;
        int val =0;
             while (temp > 0) {
            
            arr.push_back(temp % 10);
            val = val + temp % 10;
            
            temp = temp / 10;
        }
        if(arr.size()<4){
            return 0;
        }
        long long an =0;
        for(int i =arr.size()-1;i>=3;i--){
            an= an *10+arr[i];
        }
        an=an-1;
        return (*1000)+(arr[0]*1+arr[1]*10+arr[2]*100+1);
    }
};