class Solution {
public:

    bool checkDivisibility(int n) {
      int sum=0;
       int pro=1;
       vector<int>arr1;
       int num =n;
          while(n!=0){
         arr1.push_back(n%10);
            n=n/10;

          }
           for(int i=0;i<arr1.size();i++){
            sum =sum+arr1[i];
            pro=pro*arr1[i];
           }
              int tot=sum+pro;
              if(num%tot==0){
                  return true;
              }
              return false;
    }
};