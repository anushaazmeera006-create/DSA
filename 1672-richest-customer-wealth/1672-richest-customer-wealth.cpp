class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=0;
        int money=0;
        for(int i=0;i<accounts.size();i++){
             money=0;
            for(int j =0;j<accounts[0].size();j++){
               money=money+accounts[i][j];
            }
            mx=max(mx,money);
        }
        return mx;
    }
};