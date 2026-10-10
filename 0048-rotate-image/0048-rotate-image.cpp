class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> arr; 
        arr= matrix;
        int n = matrix.size();
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                 matrix[j][n-i-1]=arr[i][j];

            }
        }
    }
};