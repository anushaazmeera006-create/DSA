// // class Solution {
// // public:
// //     bool isBipartite(vector<vector<int>>& graph) {
   
// //         int n=graph.size();
// //         queue<int>q;
      
// //          vector<int> color(n,-1);
// //         vector<int> visi(n,0);
// //         for(int i = 0; i < n; i++) {
// //            if(color[i] == -1) {
// //              visi[i]=1;
// //              q.push(i);
// //             color[i]=0;
// //         while(!q.size()){
// //             int node=q.front();
// //             q.pop();
 
// //             for(auto it:graph(node)){
// //                 if(!visi[it]){
// //                     q.push(it);
// //                 visi[it]=1
// //                 color[it]=!(color[node]);   
// //                 }
// //                 else if(color[it]==color[node]){
// //                     return false;
// //                 }

// //             }
            
           
// //              }
// //                  }
              
     
// //        return false; 
// //     }
// // };
// class Solution {
//     // using BFS
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         int n = graph.size();
//         vector<int> color(n, -1);
//         vector<int> visi(n, 0);
//         queue<int> q;

//         for(int i = 0; i < n; i++) {
//             if(visi[i]) continue;

//             q.push(i);
//             visi[i] = 1;
//             color[i] = 0;

//             while(!q.empty()) {
//                 int node = q.front();
//                 q.pop();

//                 for(auto it : graph[node]) {
//                     if(!visi[it]) {
//                         visi[it] = 1;
//                         color[it] = !color[node];
//                         q.push(it);
//                     }
//                     else if(color[it] == color[node]) {
//                         return false;
//                     }
//                 }
//             }
//         }

//         return true;
//     }
// };
 class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& visi, vector<int>& color) {
        visi[node] = 1;

        for(auto it : graph[node]) {
            if(!visi[it]) {
                color[it] = !color[node];

                if(!dfs(it, graph, visi, color))
                    return false;
            }
            else if(color[it] == color[node]) {
                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<int> visi(n, 0);
        vector<int> color(n, -1);

        for(int i = 0; i < n; i++) {
            if(!visi[i]) {
                color[i] = 0;

                if(!dfs(i, graph, visi, color))
                    return false;
            }
        }

        return true;
    }
};