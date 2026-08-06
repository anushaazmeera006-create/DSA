class Solution {
public:
    int smallestNumber(int n, int t) {
     int i =n;
     int pro =1;
     int ans=0;
     while(i>=n){
       int val =i;
       int temp=i;
       pro =1;
      while(temp!=0){
    
      pro = pro*(temp%10);
        temp =temp/10;
      }
     if(pro%t==0){
     ans = val;
     break;
     }
     else{
      i++;
     }

     }
 return ans;
    }
};