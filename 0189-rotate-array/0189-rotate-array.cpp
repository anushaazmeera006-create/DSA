class Solution {
public:
    void rotate(vector<int>& nums, int k) {
             
        vector<int>arr(2*nums.size(),0);
        int n = nums.size();
           k = k % n;   
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];
            arr[i+n]=nums[i];
        } 

        int j=n-k;
        for(int i = 0;i<n;i++){
            nums[i]=arr[j+i];
            
        }
    }
};