class Solution {
public:
int gcd(int a,int b ){
    if(a==0||b==0){
        return max(a,b);
    }
    int result = min(a,b);
    while(result>0){
    if(a%result==0&&b%result==0){
        break;
    }
    result--;
    }
    return result;
}
    int gcdOfOddEvenSums(int n) {
          int even =0;
        int odd=0;

       for(int i =1;i<=2*n;i++) {
        if(i%2==0){
          even=even+i;
        }
        else{
           odd= odd+i;
        }
        
       }
       return gcd(even,odd);
    }
};