// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         map<int,int>mp;
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;

//         }
//         for(auto it:mp){
//             auto nxt = next(it);
//            if(it.first=nxt.first){
//             count++;
//            }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
  //  sort(nums.begin(),nums.end());
     int longest=1;
    // int lastmin=INT_MIN;
     int cnt =0;
   unordered_set<int> st;
     for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);

     }
     for(auto it: st){
        if(st.find(it-1)==st.end()){
            cnt =1;
           int  x=it;
            while(st.find(x+1)!=st.end()){
                cnt++;
                x =x+1;
            }
         longest=max(longest,cnt);
        }
     }
     return longest;
    }
};