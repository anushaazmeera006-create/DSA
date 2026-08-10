
// class Solution {
// public:
    
//     int orangesRotting(vector<vector<int>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        vector<vector<int>> visi = grid;
//        queue<pair<pair<int,int>,int>> q;
//       int fresh=0;
//         for(int i =0;i<m;i++){
//               for(int j =0;j<n;j++){
//                 if(grid[i][j]==2){
//                    q.push({{i,j},0});
//                    visi[i][j]=2;
//                 }
//                 else{
//                     visi[i][j]=0;
//                 }
//                 if(grid[i][j]==1){
//                     fresh++;
//                 }
//               }
//         }
//     int tm =0;
//        int drow[]={-1,0,+1,0};
//        int dcol[]={0,1,0,-1};
//        int count =0;
//         while(!q.empty()){
//             int r=q.front().first.first;
//             int c = q.front().first.second;
//             int t=  q.front().second;
//             tm =max(tm,t);
//             q.pop();
//               for(int i =0;i<4;i++){
//                 int nrow=r+drow[i];
//                 int ncol = c+dcol[i];
//                 if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&grid[nrow][ncol]==1){
//                    q.push({{nrow,ncol},t+1});
//                    visi[nrow][ncol]=2; 
//                    count++;
//                 }
//               }

   
//         }
//         if(count!=fresh){
//             return -1;
//         }
//         return tm;
//     }
// };
// // class Solution {
// // public:
// //     int orangesRotting(vector<vector<int>>& grid) {
// //         int m = grid.size();
// //         int n = grid[0].size();
// //         vector<vector<int>> visited = grid;
// //         //making queue in which we will fill rotten oranges
// //         queue<pair<int, int>> q;
// //         int countFreshOrange = 0;
// //         for (int i = 0; i < m; i++) {
// //             for (int j = 0; j < n; j++) {
// //                 if (visited[i][j] == 2) {
// //                     q.push({i, j});
// //                 }
// //                 if (visited[i][j] == 1) {
// //                     countFreshOrange++;
// //                 }
// //             }
// //         }
// //         //q.empty() means there is no rotten orange in the grid and countFreshOrange = 0 means we will rotten the freshoranges in 0 mins
// //         if (countFreshOrange == 0)
// //             return 0;
// //         if (q.empty())
// //             return -1;
        
// //         int minutes = -1;
// //         // we will cover four directions i.e. up, down, left, right
// //         vector<pair<int, int>> dirs = {{1, 0},{-1, 0},{0, -1},{0, 1}};
// //         while (!q.empty()) {
// //             int size = q.size();
// //             while (size--) {
// //                 auto [x, y] = q.front();
// //                 q.pop();
// //                 for (auto [dx, dy] : dirs) {
// //                     int i = x + dx;
// //                     int j = y + dy;
// //                     if (i >= 0 && i < m && j >= 0 && j < n && visited[i][j] == 1) {
// //                         visited[i][j] = 2;
// //                         countFreshOrange--;
// //                         q.push({i, j});
// //                     }
// //                 }
// //             }
// //             minutes++;
// //         }
        
// //         if (countFreshOrange == 0)
// //             return minutes;
// //         return -1;
// //     }
// // };
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<pair<int,int>,int>> q;
        int fresh = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2)
                    q.push({{i,j},0});

                if(grid[i][j]==1)
                    fresh++;
            }
        }

        int tm = 0;
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        int count = 0;

        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();

            tm = max(tm,t);

            for(int i=0;i<4;i++){
                int nrow = r+drow[i];
                int ncol = c+dcol[i];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1){
                    
                    grid[nrow][ncol] = 2;  
                    q.push({{nrow,ncol},t+1});
                    count++;
                }
            }
        }

        if(count != fresh)
            return -1;

        return tm;
    }
};