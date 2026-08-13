class Solution {
public:
 void dfs(int x, int y, int delx[], int dely[], vector<vector<int>>& arr, vector<vector<int>>& visi) {
        int n = arr.size();
        int m = arr[0].size();

        for(int i = 0; i < 4; i++) {
            int nrow = x + delx[i];
            int ncol = y + dely[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && arr[nrow][ncol] == 1 && !visi[nrow][ncol]) {
                visi[nrow][ncol] = 1;
                dfs(nrow, ncol, delx, dely, arr, visi);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
     int delx[] = {-1, 0, 1, 0};
        int dely[] = {0, 1, 0, -1};

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visi(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++) {
            if(grid[i][0] == 1) {
                visi[i][0] = 1;
                dfs(i, 0, delx, dely, grid, visi);
            }
        }

        for(int i = 0; i < m; i++) {
            if(grid[0][i] == 1) {
                visi[0][i] = 1;
                dfs(0, i, delx, dely, grid, visi);
            }
        }

        for(int i = 0; i < m; i++) {
            if(grid[n-1][i] == 1) {
                visi[n-1][i] = 1;
                dfs(n-1, i, delx, dely, grid, visi);
            }
        }

        for(int i = 0; i < n; i++) {
            if(grid[i][m-1] == 1) {
                visi[i][m-1] = 1;
                dfs(i, m-1, delx, dely, grid, visi);
            }
        }
int count=0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!visi[i][j] && grid[i][j] == 1) {
                   count++; 
                }
            }
        } 
        return count;      
    }
};