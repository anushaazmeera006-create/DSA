class Solution {
public:
  int divide(int x){
    vector<int>arr;
    while(x!=0){
      arr.push_back(x%10);
      x=x/10;
    }
    return arr.size();
  }
    int findNumbers(vector<int>& nums) {
        int ct=0;
      for(int i=0;i<nums.size();i++){
          int ans = divide(nums[i]);
             if(ans%2==0){
                ct=ct+1;
             }
      }
      return ct;
    }
};