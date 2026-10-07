class Solution {
public:


    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>arr;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j]==0){
                    arr.push_back({i,j});
                }
            }
        }
    for(int k=0;k<arr.size();k++){
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
               
                if((i==arr[k].first)||(j==arr[k].second)){
                    matrix[i][j]=0;
                }
                }
            }
        }

    }
};