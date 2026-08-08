// // class Solution {
// // public:
// //  vector<vector<int>> traversal(int node,vector<int>&visi[],vector<int>&adj,vector<vector<int>>& image,int color){
 
// //       int n = image.size();
// //         int m = image[0].size();
// //     visi[n]=1;
// //     for(auto it: adj[node]){
// //         if(!visi[it]){
// //          for(int i =0;i<n;i++){
// //             for(int j =0;j<m;j++){
// //                 if(image[i][j]==it){
// //                     image[i][j]=color;
// //                 }
// //             }
// //          }
// //          traversal(it,visi,adj,image);
// //         }
// //     }
// //     return image;
// // }
// //     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
// //         int n = image.size();
// //         int m = image[0].size();
// //         vector<int>adj(n);
        
// //         for(int i=0;i<n;i++){
// //            for(int j =0;j<m;j++){
// //               if(image[i][j]!=0){
// //             adj[i].push_back(image[i][j]);
// //               }
// //            }
// //         }
// //         vector<int> visi(n,0);
// //         for(int i =0;i<n;i++){
// //             if(!visi[i]){
// //                 traversal(image[sr][sc],visi,adj,color);
// //             }
// //         }
// //         return image;
// //     }
// // };
// class Solution {
// public:
//    void dfs(int row,int col,vector<vector<int>>&image,int inicolor,int delx[],int dely[],int color){
//     image[row][col]=color;
//     int m = image.size();
//     int n = image[0].size();
//     for(int i =0;i<4;i++){
//         int nrow= row+delx[i];
//         int ncol=col+dely[i];
//         if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol]==inicolor){
//          //   image[row][col]=color;
//          dfs(nrow,ncol,image,inicolor,delx,dely,color);
//         }
//     }
    
//    }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int inicolor=image[sr][sc];
//        //  vector<vector<int>> ans =image;
//        int delx[]={-1,0,+1,0};
//        int dely[]={0,+1,0,-1};
//        dfs(sr,sc,image,inicolor,delx,dely,color);
//        return image;
//     }
// };
class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& image, int inicolor, int delx[], int dely[], int color) {
        image[row][col] = color;

        int m = image.size();
        int n = image[0].size();

        for(int i = 0; i < 4; i++) {
            int nrow = row + delx[i];
            int ncol = col + dely[i];

            if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && image[nrow][ncol] == inicolor) {
                dfs(nrow, ncol, image, inicolor, delx, dely, color);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];

        if(inicolor == color) return image;

        int delx[] = {-1, 0, 1, 0};
        int dely[] = {0, 1, 0, -1};

        dfs(sr, sc, image, inicolor, delx, dely, color);

        return image;
    }
};