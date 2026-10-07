// Let's try with: 1 3 5 4 2

// Breakpoint: 3 (because 3 < 5)
// Swap 3 with the smallest larger number to its right (4)
// After swap: 1 4 5 3 2
// Reverse everything after 4: 1 4 2 3 5
// Final next permutation: 1 4 2 3 5

// Key Understanding
// The breakpoint is like a sign saying "Change me to get the next bigger number!"
// Swapping ensures we make the smallest possible increase.
// Reversing guarantees we get the very next permutation in order.
// This method is efficient because it avoids checking all possibilities.
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx=-1;
          int brkpt=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                brkpt = nums[i-1];
                idx=i-1;
                break;
            }

        }
      if(idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }   
        int nxt;
       
        int mn=INT_MAX;
        for(int i=idx+1;i<n;i++){
          if(brkpt<nums[i]){
              int diff = nums[i]-brkpt;
              mn = min(mn,diff);
               
          }
           
        }
        nxt=mn+brkpt;
        int num;
        for(int i=n-1;i>idx;i--){
            if(nxt ==nums[i]){
                swap(nums[idx],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+idx+1,nums.end());
    }
};