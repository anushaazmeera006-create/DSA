// class Solution {
// public:
//     bool checkValidString(string s) {
//         int n = s.length();
//         stack<char>st;
//         bool ans =true;
//         bool ans1=true;
//         bool ans2=true;
//         for(int i =0;i<s.length();i++){
//             st.push(s[i]);
//             st.push(s[n-1-i]);
//             if(st.top()==')'||st.top()=='*'){
//                 st.pop();
//                 ans1=true;
//             }
//             if(st.top()=='('||st.top()=='*'){
//                 st.pop();
//                 ans2=true;
//             }
//             ans= ans &&ans1&&ans2;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
   int left =0;
   int right =0;
 bool ans =false;
        for(int i =0;i<s.length();i++){
            if(s[i]=='('){
          left++;
          right++;
            }
            if(s[i]==')'){
                left--;
                right--;
            }
            if(s[i]=='*'){
               left--;
             right++;
            }

        if(right<0){
            return false;
        }
        if(left<0){
            left =0;
        }
    }
    return left==0;
    }
};