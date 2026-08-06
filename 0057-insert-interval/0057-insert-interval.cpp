class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int c = newInterval[0];
        int d =newInterval[1];
         vector<vector<int>> arr1;
        vector<vector<int>> arr;
  for(int i =0;i<intervals.size();i++){
    int a =intervals[i][0];
    int b =intervals[i][1];
   if((a>=c||b>=c)&&(b<=d||a<=d)){
   arr.push_back({a,b});
   }
   else{
     arr1.push_back({a,b});
   }
  } 
  vector<int>nums;
   for(int i =0;i<arr.size();i++){
    nums.push_back(arr[i][0]);
    nums.push_back(arr[i][1]);
   }
   nums.push_back(c);
   nums.push_back(d);
   sort(nums.begin(),nums.end());
   int min = nums[0];
   int mx= nums[nums.size()-1];
   arr1.push_back({min,mx});
   sort(arr1.begin(),arr1.end());
   return arr1;
    }

};
// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         vector<vector<int>> a;
//         int n=intervals.size();
//         bool b=true;
//         for(int i=0;i<n;i++){
//             if(b && newInterval[0]<=intervals[i][0]){
//                 if(a.size()==0 || a[a.size()-1][1]<newInterval[0]) a.push_back(newInterval);
//                 else if(a[a.size()-1][1]<newInterval[1]) a[a.size()-1][1]=newInterval[1];
//                 b=false;
//             }
//             if(a.size()==0 || a[a.size()-1][1]<intervals[i][0]) a.push_back(intervals[i]);
//             else if(a[a.size()-1][1]<intervals[i][1]) a[a.size()-1][1]=intervals[i][1];
//         }
//         if(b){
//             if(a.size()==0 || a[a.size()-1][1]<newInterval[0]) a.push_back(newInterval);
//             else if(a[a.size()-1][1]<newInterval[1]) a[a.size()-1][1]=newInterval[1];
//         }
//         return a;
//     }
// };