// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>arr1;
//         arr1=[[1]];
//          vector<vector<int>>arr2;
//          vector<vector<int>>ans;
//          arr2=[[1],[1,1]];
//          vector<int>arr3;
//         if(numRows==1){
//             return [[1]];
//         }
//         if(numsRows==2){
//             return [[1],[1,1]];
//         }
//         int sum =0;
//        else{ 
//         vector<vector<int>>arr;
//         for(int i=0;i<ans.size();i++){
//             for(j=0;j<ans[i].size();j++){
//                 for(k=j;k<2+j;k++){
//                  sum =sum+ans[i][k];
//                 }
//                 arr3.push_back(sum);
//             }
//             ans[i].push_back(arr3);
//         }
//        }
//         return ans;

//     }
// };
class Solution {
public:
    int ncr(long long n,long long r){
        long long res =1;
        for(int i=0;i<r;i++){
            res = res*(n-i);
            res = res/(i+1);
        }
        return res;
    }
    
    vector<vector<int>> generate(int numRows) {
       
     vector<vector<int>> arr;
     for(int i=0;i<numRows;i++){
         vector<int>nums;
        for(int j=0;j<numRows;j++){
            if(ncr(i,j)!=0){
          nums.push_back(ncr(i,j));
            }
        }
        arr.push_back(nums);
     }
    return arr;
    }
};