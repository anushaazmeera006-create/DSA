// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         vector<vector<int>> arr;
//         vector<vector<int>> arr1;
//       sort(intervals.begin(),intervals.end()) ;
//       int c = intervals[0][0];
//        int d = intervals[0][1];
       
//       for(int i =0;i<intervals.size();i++){
//         int a =intervals[i][0];
//         int b = intervals[i][1];
//         if(a<=d&&b>c){
//          arr1.push_back({a,b});
//         }
//         else{
         
//             c=a;
//             d=b;

//         }
//       }
//       return arr.size();
//     }
// };
class Solution {
public:
// we first find non over lapping intervals an dthe minus from n so we get overlapping intrevals which we wnat to remove
    static bool comp(vector<int>&arr1,vector<int>&arr2){
        return arr1[1]<arr2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end(),comp);
      int count=1;
      int last = intervals[0][1];
      for(int i =1;i<intervals.size();i++){
        if(intervals[i][0]>=last){
            count++;
            last = intervals[i][1];
        }
      }
      return intervals.size()-count;
    }
};