// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
//     }
// };
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> a;
        int n=intervals.size();
        bool b=true;
        for(int i=0;i<n;i++){
            if(b && newInterval[0]<=intervals[i][0]){
                if(a.size()==0 || a[a.size()-1][1]<newInterval[0]) a.push_back(newInterval);
                else if(a[a.size()-1][1]<newInterval[1]) a[a.size()-1][1]=newInterval[1];
                b=false;
            }
            if(a.size()==0 || a[a.size()-1][1]<intervals[i][0]) a.push_back(intervals[i]);
            else if(a[a.size()-1][1]<intervals[i][1]) a[a.size()-1][1]=intervals[i][1];
        }
        if(b){
            if(a.size()==0 || a[a.size()-1][1]<newInterval[0]) a.push_back(newInterval);
            else if(a[a.size()-1][1]<newInterval[1]) a[a.size()-1][1]=newInterval[1];
        }
        return a;
    }
};