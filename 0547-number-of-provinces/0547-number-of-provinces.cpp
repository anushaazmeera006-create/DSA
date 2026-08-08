class Solution {
public:
void traversal(int n,vector<int>adj[],vector<int>& visi){
    if(!visi[n]){
        visi[n]=1;
    for(auto it:adj[n]){
        if(!visi[it]){
            traversal(it,adj,visi);
        }
    }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m= isConnected[0].size();
        vector<int>adj[n];
        for(int i =0;i<n;i++){
              for(int j =0;j<m;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
              }
        //    int u =isConnected[i][0];
        //     int v=isConnected[i][1];
        //     adj[u].push_back(v);
        //      adj[v].push_back(u);
        } 
        int count=0;
        vector<int> visi(n,0);

        for(int i =0;i<n;i++){
              if(!visi[i]){
                traversal(i,adj,visi);
                count++;
              }
        }
        return count;
    }
};