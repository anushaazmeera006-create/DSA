
// class Solution {
// public:
//     void dfs(int x, int y, int delx[], int dely[], vector<vector<char>>& arr,vector<vector<int>>& visi) {
//        // arr[x][y] = 'X';

//         int n = arr.size();
//         int m = arr[0].size();

//         for(int i = 0; i < 4; i++) {
//             int nrow = x + delx[i];
//             int ncol = y + dely[i];

//             if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && arr[nrow][ncol] == 'O'&&(!visi[nrow][ncol])) {
//                 visi[nrow][ncol]=1;
//                dfs(nrow, ncol, delx, dely, arr,visi);
//             }
//         }
//     }

//     void solve(vector<vector<char>>& board) {
//         int delx[] = {-1, 0, 1, 0};
//         int dely[] = {0, 1, 0, -1};

//         int n = board.size();
//         int m = board[0].size();

   
//         vector<vector<int>>visi(n,vector<int>(m,0));
//        for(int i =0;i<m;i++){
//         if(board[i][0]=='O'){
//             visi[i][0]=1;
//             dfs(i,0,delx,dely,board,visi);
//         }
//        }
//      for(int i =0;i<n;i++){
//         if(board[0][i]=='O'){
//             visi[0][i]=1;
//             dfs(0,i,delx,dely,board,visi);
//         }
//        }
//      for(int i =0;i<m;i++){
//         if(board[n-1][i]=='O'){
//             visi[n-1][i]=1;
//             dfs(n-1,i,delx,dely,board,visi);
//         }
//        }
//       for(int i =0;i<m;i++){
//         if(board[i][m-1]=='O'){
//             visi[i][m-1]=1;
//             dfs(i,m-1,delx,dely,board,visi);
//         }
//        }
//         for(int i = 0; i < n ; i++) {
//             for(int j = 0; j < m ; j++) {
//                   if(!visi[i][j]&&board[i][j]=='O'){
//                 board[i][j] ='X';
//                   }
//             }
//         }
//     }
// };
class Solution {
public:
    void dfs(int x, int y, int delx[], int dely[], vector<vector<char>>& arr, vector<vector<int>>& visi) {
        int n = arr.size();
        int m = arr[0].size();

        for(int i = 0; i < 4; i++) {
            int nrow = x + delx[i];
            int ncol = y + dely[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && arr[nrow][ncol] == 'O' && !visi[nrow][ncol]) {
                visi[nrow][ncol] = 1;
                dfs(nrow, ncol, delx, dely, arr, visi);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int delx[] = {-1, 0, 1, 0};
        int dely[] = {0, 1, 0, -1};

        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> visi(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++) {
            if(board[i][0] == 'O') {
                visi[i][0] = 1;
                dfs(i, 0, delx, dely, board, visi);
            }
        }

        for(int i = 0; i < m; i++) {
            if(board[0][i] == 'O') {
                visi[0][i] = 1;
                dfs(0, i, delx, dely, board, visi);
            }
        }

        for(int i = 0; i < m; i++) {
            if(board[n-1][i] == 'O') {
                visi[n-1][i] = 1;
                dfs(n-1, i, delx, dely, board, visi);
            }
        }

        for(int i = 0; i < n; i++) {
            if(board[i][m-1] == 'O') {
                visi[i][m-1] = 1;
                dfs(i, m-1, delx, dely, board, visi);
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!visi[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};