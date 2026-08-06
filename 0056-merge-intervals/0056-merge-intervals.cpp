class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int a;
        int b;
        int c;
         int d;
          sort(intervals.begin(), intervals.end());
        vector<vector<int>> arr;
    // for(int j=0;j<intervals.size();j++)  {
        c =intervals[0][0];
        d =intervals[0][1];
      for(int i =1;i<intervals.size();i++)  {
      
         a =intervals[i][0];
         b =intervals[i][1];
        if(a<=d&&b>=c){
         c =min(a,c);
         d =max(b,d);
        }
        else{
            arr.push_back({c,d});
            c=a;
            d=b;
        }
      } 

     

        arr.push_back({c, d});
       

        return arr;
    }
};