// class Solution {
// public:
//   vector<int> eventualSafeNodes(vector<vector<int>>& G) {
//     int N = G.size();
//     vector<vector<int>> R(N);
//     vector<int> outdegree(N), safe(N), ans;
//     queue<int> q;
//     for (int i = 0; i < N; ++i) {
//         for (int v : G[i]) {
//             R[v].push_back(i);
//         }
//         outdegree[i] = G[i].size();
//         if (outdegree[i] == 0) q.push(i);
//     }
//     while (q.size()) {
//         int u = q.front();
//         q.pop();
//         safe[u] = 1;
//         for (int v : R[u]) {
//             if (--outdegree[v] == 0) q.push(v);
//         }
//     }
//     for (int i = 0; i < N; ++i) {
//         if (safe[i]) ans.push_back(i);
//     }
//     return ans;
// }
// };
class Solution {
public:
   bool dfs(int node, vector<int>& visi ,vector<int>& pathvisi, vector<vector<int>>& adj) {
       visi[node]=1;
       pathvisi[node]=1;
       for(auto it : adj[node]){
          if(!visi[it]){
            if(dfs(it,visi,pathvisi,adj)){
                return true;

            }
          }
        else if(pathvisi[it]){
           return true;
        
          }
       }
       pathvisi[node]=0;
       return false;
    }


  vector<int> eventualSafeNodes(vector<vector<int>>& G) {
 int v=G.size();
 vector<vector<int>> adj(v);
 for(int i=0;i<v;i++){
    for(int j=0;j<G[i].size();j++){
       adj[i].push_back(G[i][j]);
    }
 }
 vector<int> visi(v,0);
  vector<int> pathvisi(v,0);
  vector<int> ans;
       for(int i=0;i<v;i++){
        if(dfs(i,visi,pathvisi,adj)==false){
       ans.push_back(i);
        }
       }
       return ans;
}
};