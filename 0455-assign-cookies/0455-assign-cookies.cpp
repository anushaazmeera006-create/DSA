class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i =0;
        int count=0;
        int totalct=0;
         sort(g.begin(), g.end());
        sort(s.begin(), s.end());
       for(int j =0;j<s.size()&&i<g.size();j++) {
        if(g[i]<=s[j]){
 
            totalct++;
                  i++;
        }
      
      
        
       }
       return totalct;
    }
};