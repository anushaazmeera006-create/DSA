// // class Solution {
// // public:
// // void traversal(int n,vector<int>&visi, vector<int>adj[]){
// //     //visi[n]=1;
// //     if(!visi[n]){
// //         visi[n]=1;
    
// //    for(auto it: adj[n]){
// //     if(!visi[it]){
        
      
// //         traversal(it,visi,adj);
// //     }
// //    }
// // }
// // }
// //     int numIslands(vector<vector<char>>& grid) {
       
// //         int n = grid.size();
// //         int m = grid[0].size();
// //          vector<int>adj[n];
// //         for(int i =0;i<n;i++){
// //               for(int j =0;j<m;j++){
// //                 if(grid[i][j]==1){
// //                     adj[i].push_back(j);
// //                 }
// //               }

// //         } 
// //         int count=0;
// //      vector<int>visi(n,0);
// //         for(int i =0;i<n;i++){
// //             if(!visi[i]){
// //              traversal(i,visi,adj);
// //              count++;
// //             }
// //         }
// //         return count;
// //     }
// // };
// class Solution {
// public:
// void traversal(int r,int c,int n,vector<int>&visi, vector<vector<char>>& grid,vector<vector<int>> &adj,int delx[],int dely[]){
//     int m =grid.size();
//     int n = grid[0].size();

//  for(int i =0;i<4;i++){
//      int nrow=r+delx[i];
//      int ncol =c+dely[i];
//      if(nrow>=r&&ncol<m&&ncol>=0&&grid[nrow][ncol]=='1'){
//               traversal(nrow,ncol,i,visi,grid,adj,delx,dely);
//      }
//  }
// }
//     int numIslands(vector<vector<char>>& grid) {
//       int delx[] = {+1,0,-1,0};
//       int dely[]={0,-1,0,1};
//       vector<vector<int>>adj;
//      for(int i =0;i<grid.size();i++){
//         for(int j =0;j<grid[0].size();j++){
//             if(grid[i][j]==1){
//                 adj[i].push_back(j);
//             }
  
            
//         }
//      }
//      vecto<int<visi(n,0);
//      int count =0;
//      for(int i =0;i<n;i++){
//     if(!visi[i]){
//         traversal(0,0,i,visi,grid,adj,delx,dely);
//         count++;
//     }
//      }
//      return count;
//     }
// };
class Solution {
public:
    void traversal(int r, int c, int n, int m, vector<vector<int>>& visi,
                   vector<vector<char>>& grid, int delx[], int dely[]) {
        
        visi[r][c] = 1;

        for(int i = 0; i < 4; i++) {
            int nrow = r + delx[i];
            int ncol = c + dely[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
               grid[nrow][ncol] == '1' && !visi[nrow][ncol]) {
                
                traversal(nrow, ncol, n, m, visi, grid, delx, dely);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int delx[] = {1, 0, -1, 0};
        int dely[] = {0, -1, 0, 1};

        vector<vector<int>> visi(n, vector<int>(m, 0));

        int count = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == '1' && !visi[i][j]) {
                    traversal(i, j, n, m, visi, grid, delx, dely);
                    count++;
                }
            }
        }

        return count;
    }
};