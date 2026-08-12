// // class Solution {
// // public:

// // void dfs(int x,int y,vector<vector<int>>& mat,int delx[],int dely[]){
// //     int m=mat.size();
// //     int n = mat[0].size();
// //  fro(int i =0;i<4;i++){
// //     int nrow=x+delx[i];
// //     int ncol =y+dely[i];
// //     if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&(mat[nrow][col]==1))
// //  }
// // }

// //     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
// //         int delx={-1,0,1,0};
// //         int dely={0,1,0,-1};
// // for(int i =0;i<mat.size();i++){
// // for(int j =0;j<mat.size();j++){
// //     if(mat[i][j]!=0){
// //     dfs(i,j,mat,delx,dely);
// //     }
// // }
// // }

// //     }
// // };
// class Solution {
// public:

//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int m = mat[0].size();
//      vector<vector<int>> visi(n,vector<int>(m,0));
//         vector<vector<int>> dist(n,vector<int>(m,0));
//          queue<pair<pair<int,int>,int>>q;
//         for(int i =0;i<mat.size();i++){
//         for(int j =0;j<m;j++){
//            if(mat[i][j]==0){
//            q.push({{i,j},0});
//              visi[i][j]=1;
// }
// else{
//   visi[i][j]=0;
// }
// }
//         }
//        int delx[]={-1,0,1,0};
//         int dely[]={0,1,0,-1};
//         while(!q.empty()){
//             int x = q.front().first.first;
//             int y = q.front().first.second;
//             int step = q.front().second;
//             q.pop();
//                 dist[x][y]=step;
//        for(int i =0;i<4;i++){
//         int nrow=x+delx[i];
//         int ncol =y+dely[i];
//         if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!mat[nrow][ncol]){
//             visi[nrow][ncol]=1;
//             q.push({{nrow,ncol},step+1});

//         }
//        }

//         }
//         return dist;
//     }
// };
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> visi(n,vector<int>(m,0));
        vector<vector<int>> dist(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visi[i][j]=1;
                }
                else{
                    visi[i][j]=0;
                }
            }
        }

        int delx[]={-1,0,1,0};
        int dely[]={0,1,0,-1};

        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int step=q.front().second;
            q.pop();

            dist[x][y]=step;

            for(int i=0;i<4;i++){
                int nrow=x+delx[i];
                int ncol=y+dely[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visi[nrow][ncol]==0){
                    visi[nrow][ncol]=1;
                    q.push({{nrow,ncol},step+1});
                }
            }
        }

        return dist;
    }
};
