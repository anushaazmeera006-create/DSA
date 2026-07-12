// class Solution {
// public:
//     vector<int> arrayRankTransform(vector<int>& arr) {
//         vector<int>nums;
//         unordered_map<int,int> mp;
//         int rank =0;
//         for(int i =0;i<arr.size();i++){
//             mp.insert({arr[i],r++});
//         }
//         vector<int> array;
//         array = arr;
//         sort(array.begin(),array.end());
//         for(int i =0;i<array.size();i++){
//             for(auto it:mp){
//                if( it.first==array[i]){
//                 nums.push_back(it.second);
//                }
//             }
//         }
//         return nums;
//     }
// };
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> array;
        array = arr;
       vector<int>nums;
        unordered_map<int,int> mp;
        int r =1;
        sort(array.begin(),array.end());
          for(int i =0;i<array.size();i++){
           // mp.insert({array[i],r++});
                 if(mp.find(array[i]) == mp.end()) {
                mp[array[i]] = r++;
            }
      
        }   
        for(int i =0;i<arr.size();i++){
            // for(auto it:mp){
            //    if( it.first==arr[i]){
            //     nums.push_back(it.second+1);
            //    }
            // }
            nums.push_back(mp[arr[i]]);
        }
        return nums;
    }
};