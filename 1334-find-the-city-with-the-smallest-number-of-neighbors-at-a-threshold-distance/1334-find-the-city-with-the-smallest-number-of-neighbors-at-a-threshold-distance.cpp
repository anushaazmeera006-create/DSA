// class Solution {
// public:
//     int check(int src,int n, int distanceThreshold,vector<vector<pair<int,int>>> adj,int count){
//          vector<long long> dist(n,LLONG_MAX);
//          priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> q;
        
//         dist[src]=0;
//         q.push({0,src});
//       while(!q.empty()){

//             auto it=q.top();
//             q.pop();

//             long long wt=it.first;
//             int node=it.second;

//             for(auto it:adj[node]){

//                 long long adjwt=it.first;
//                 int adjnode=it.second;
//                 if(wt+adjwt<dist[adjnode]){
//                     dist[adjnode]=wt+adjwt;
//                     if(wt+adjwt<=distanceThreshold){
//                         count++;
//                     }
//                  q.push({wt+adjwt,adjnode});
//                 }

    
//                 }
//       }
//       return count;
//     }
//     int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
//             vector<vector<pair<int,int>>> adj(n);
  
//         for(int i=0;i<edges.size();i++) {

//             int u=edges[i][0];
//             int v=edges[i][1];
//             int wt=edges[i][2];

//             adj[u].push_back({wt,v});
//             adj[v].push_back({wt,u});
//         }
        
//      int ans=-1;
//       int mincount=INT_MAX;
        
//   for(int i=0;i<n;i++){
//     int count=check(i,n,distanceThreshold,adj,0);
//     if(count<=mincount){
//         mincount= count;
//         ans=i;
//     }
//   }
//   return ans;
//     }
// };
class Solution {
public:
    int check(int src,int n,int distanceThreshold,
              vector<vector<pair<int,int>>> adj,int count){

        vector<long long> dist(n,LLONG_MAX);

        priority_queue<
            pair<long long,int>,
            vector<pair<long long,int>>,
            greater<pair<long long,int>>
        > q;

        dist[src]=0;
        q.push({0,src});

        while(!q.empty()){

            auto it=q.top();
            q.pop();

            long long wt=it.first;
            int node=it.second;

            if(wt>dist[node])
                continue;

            for(auto it:adj[node]){

                long long adjwt=it.first;
                int adjnode=it.second;

                if(wt+adjwt<dist[adjnode]){

                    dist[adjnode]=wt+adjwt;

                    q.push({wt+adjwt,adjnode});
                }
            }
        }

        // Count after finding all shortest distances
        for(int i=0;i<n;i++){

            if(i!=src && dist[i]<=distanceThreshold){
                count++;
            }
        }

        return count;
    }

    int findTheCity(int n,vector<vector<int>>& edges,
                    int distanceThreshold){

        vector<vector<pair<int,int>>> adj(n);

        for(int i=0;i<edges.size();i++){

            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];

            adj[u].push_back({wt,v});
            adj[v].push_back({wt,u});
        }

        int ans=-1;
        int mincount=INT_MAX;

        for(int i=0;i<n;i++){

            int count=check(i,n,distanceThreshold,adj,0);

            if(count<=mincount){

                mincount=count;
                ans=i;
            }
        }

        return ans;
    }
};