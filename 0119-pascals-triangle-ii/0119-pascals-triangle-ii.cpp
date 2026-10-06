class Solution {
public:
    int ncr(long long n,long long r){
        long long res =1;
        for(int i=0;i<r;i++){
            res = res*(n-i);
            res = res/(i+1);
        }
        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int>arr;
        for(int i=0;i<=rowIndex;i++){
        arr.push_back(ncr(rowIndex,i));
        }
        return arr;
    }
};