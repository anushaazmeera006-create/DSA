class Solution {
public:
   
    int numberOfSubstrings(string s) {
        int l =0;
        int  r=0;
        int cnt =0;
        unordered_map<int,int>mp;
        while(r<s.length()){
            mp[s[r]]++;
         
           
           while(mp.size()==3){

            cnt=cnt+s.length()-r;
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);
            }
            l++;
           }
   
           r++;
        }
    return cnt;
    }
};