class Solution {
public:
int gcd(int a,int b){
 while(b){
    int temp =b;
    b=a%b;
    a=temp;
 }
 return a;
}
    int findGCD(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int small= nums[0];
     int big = nums[nums.size()-1];
     return gcd(small,big);
    }
};