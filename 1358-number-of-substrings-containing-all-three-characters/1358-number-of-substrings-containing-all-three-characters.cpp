// class Solution {
// public:
   
//     int numberOfSubstrings(string s) {
//         int l =0;
//         int  r=0;
//         int cnt =0;
//         unordered_map<int,int>mp;
//         while(r<s.length()){
//             mp[s[r]]++;
         
           
//            while(mp.size()==3){

//             cnt=cnt+s.length()-r;
//             mp[s[l]]--;
//             if(mp[s[l]]==0){
//                 mp.erase(s[l]);
//             }
//             l++;
//            }
   
//            r++;
//         }
//     return cnt;
//     }
// };
class Solution {
public:
   
    int numberOfSubstrings(string s) {
     int   lastseen[3]={-1,-1,-1};
     int n =s.length();
            int cnt =0;
     for(int i=0;i<s.length();i++){
        lastseen[s[i]-'a']=i;
        if(lastseen[0]!=-1&&lastseen[1]!=-1&&lastseen[2]!=-1){
          cnt=cnt+(1+min(lastseen[0],min(lastseen[1],lastseen[2])));
        }
     }
     return cnt;
    }
};