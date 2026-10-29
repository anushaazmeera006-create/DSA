class Solution {
public:
    int bsearch(vector<int>& nums,int high,int low, int target){
     
     if(low<=high){
         int mid = low+(high-low)/2;
         if(nums[mid]==target){
            return mid;
         }
        if(nums[mid]>target){
            return bsearch(nums,mid-1,low,target);
        }
        return bsearch(nums,high,mid+1,target);
     }
     else{
        return -1;
     }
    }
      
    int search(vector<int>& nums, int target) {
       int  low = 0;
        int n = nums.size();
        int high= n-1;


      int ans = bsearch(nums,high,low,target);
      return ans;
    }
};