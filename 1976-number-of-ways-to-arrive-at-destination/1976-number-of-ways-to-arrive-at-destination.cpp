// // class Solution {
// // public:
// //     int countPaths(int n, vector<vector<int>>& roads) {
// //        vector<vector<pair<int,int>>> adj(n);
// //         for(int i=0;i<roads.size();i++){
// //             int u= roads[i][0];
// //             int v=roads[i][1];
// //             int wt=roads[i][2];
// //              adj[u].push_back({wt,v});
// //               adj[v].push_back({wt,u});          
// //         }
// //         vector<int>dist(n,INT_MAX);
// //              priority_queue<
// //             pair<long long,int>,
// //             vector<pair<long long,int>>,
// //             greater<pair<long long,int>>
// //         > q;
// //        dist[0]=0;
// //        q.push({0,0});
// //        int count=0;
// //        while(!q.empty()){
// //          auto it =q.top();
// //          q.pop();
// //          long long wt =it.first;
// //          long long node=it.second;
// //         for(auto it : adj[node]){
// //                long long adjwt = it.first;
// //             long long  adjnode = it.second;
// //             if(adjnode==n-1&&wt+adjwt==dist[adjnode]){
// //           count++;
// //           dist[adjnode]=wt+adjwt;
// //             }
// //             else if(wt+adjwt<dist[adjnode]){
// //                     dist[adjnode]=wt+adjwt;
// //                 q.push({wt+adjwt,adjnode});
// //                         }
// //             }

        
// //        }
// //        return count;
// //     }
// // };
// class Solution {
// public:
//     int countPaths(int n, vector<vector<int>>& roads) {

//         vector<vector<pair<int,int>>> adj(n);

//         for(int i=0;i<roads.size();i++){

//             int u=roads[i][0];
//             int v=roads[i][1];
//             int wt=roads[i][2];

//             adj[u].push_back({wt,v});
//             adj[v].push_back({wt,u});
//         }

//         vector<int> dist(n,LLONG_MAX);

//         priority_queue<
//             pair<long long,int>,
//             vector<pair<long long,int>>,
//             greater<pair<long long,int>>
//         > q;

//         dist[0]=0;
//         q.push({0,0});
//          vector<int>ways(n,0);
//          ways[0]=1;
       
//       int mod =(int)(1e9+7);
//         while(!q.empty()){

//             auto it=q.top();
//             q.pop();

//             long long wt=it.first;
//             int node=it.second;
//              if(wt>dist[node])
//                 continue;
//             for(auto it:adj[node]){

//                 int adjwt=it.first;
//                 int adjnode=it.second;

//                 long long newdist=wt+adjwt;
                
               

//                     if(newdist<dist[adjnode]){
//                         dist[adjnode]=newdist;
//                        q.push({newdist,adjnode});
//                      ways[adjnode]=ways[node];
//                     }
//                     else if(newdist==dist[adjnode]){
//                           ways[adjnode]=(ways[node]+ways[adjnode])%mod;
//                     }
                     

//                 }
               
                   
//         }   
            



//         return ways[n-1];
//     }
// };
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {

        vector<vector<pair<int,int>>> adj(n);

        for(int i=0;i<roads.size();i++){

            int u=roads[i][0];
            int v=roads[i][1];
            int wt=roads[i][2];

            adj[u].push_back({wt,v});
            adj[v].push_back({wt,u});
        }

        vector<long long> dist(n,LLONG_MAX);

        priority_queue<
            pair<long long,int>,
            vector<pair<long long,int>>,
            greater<pair<long long,int>>
        > q;

        dist[0]=0;
        q.push({0,0});

        vector<int> ways(n,0);
        ways[0]=1;

        int mod=1e9+7;

        while(!q.empty()){

            auto it=q.top();
            q.pop();

            long long wt=it.first;
            int node=it.second;

            if(wt>dist[node])
                continue;

            for(auto it:adj[node]){

                int adjwt=it.first;
                int adjnode=it.second;

                long long newdist=wt+adjwt;

                if(newdist<dist[adjnode]){

                    dist[adjnode]=newdist;

                    ways[adjnode]=ways[node];

                    q.push({newdist,adjnode});
                }

                else if(newdist==dist[adjnode]){

                    ways[adjnode]=(ways[adjnode]+ways[node])%mod;
                }
            }
        }

        return ways[n-1];
    }
};