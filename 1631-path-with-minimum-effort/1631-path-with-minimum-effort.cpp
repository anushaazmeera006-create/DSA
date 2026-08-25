class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {

       int delx[]={-1,0,1,0};

        int dely[]={0,1,0,-1};
        int m= heights.size();
        int n = heights[0].size();
              int ans =0;
     // priority_queue<pair<int,int>,greater<pair<int,int>>,vector<pair<int,int>>>pq;
     priority_queue<pair<int,pair<int,int>>,
               vector<pair<int,pair<int,int>>>,
               greater<pair<int,pair<int,int>>>> pq;
         pq.push({0,{0,0}});
        
         vector<vector<int>>dist(m,vector<int>(n,INT_MAX));
          dist[0][0]=0;
         while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int r= it.second.first;
            int c= it.second.second;
            int diff= it.first;
             if(r==m-1&&c==n-1){
                return diff;
            }       
        for(int i=0;i<4;i++){
            int nrow=r+delx[i];
            int ncol = c+dely[i];

            if(nrow>=0 && nrow < m&&ncol>=0 && ncol<n){
                int actdiff= abs(heights[r][c]-heights[nrow][ncol]);
                
                   
                    // in box
                int neweffort = max(diff,actdiff);
                //we before replacing in dist  we wchcek current effort with the previous effort if any ,if current efforst is less we put there
            
                if(neweffort<dist[nrow][ncol]){
                    dist[nrow][ncol]=neweffort;
                    pq.push({neweffort,{nrow,ncol}});
                }
            }
            
        }

         }
         return 0;
    }
};
