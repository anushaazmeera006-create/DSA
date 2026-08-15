class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
         for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
         }
            int V= numCourses;
         vector<int> indegree(V);
       for(int i =0;i<V;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
       } 
       queue<int> q;
       vector<int> topo;
       int count=0;
       for(int i =0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
       }
       while(!q.empty()){
        int node = q.front();
        q.pop();
        count++;
        topo.push_back(node);
        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
       }
       if(V==count){
        return 1;
       }
       return 0;
    }
};