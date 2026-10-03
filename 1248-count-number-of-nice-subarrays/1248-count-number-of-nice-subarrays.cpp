// // class Solution {
// // public:
// //     int numberOfSubarrays(vector<int>& nums, int k) {
// //     if(k < 0) return 0;

// //     int l = 0, ans = 0, odd = 0;

// //     for(int r = 0; r < nums.size(); r++){
// //         if(nums[r] % 2) odd++;

// //         while(odd > k){
// //             if(nums[l] % 2) odd--;
// //             l++;
// //         }

// //         ans += r - l + 1;
// //     }

// //     return ans;

// //     }
// // };
// class Solution {
// public:
//     int atMost(vector<int>& nums, int k){
//         if(k < 0) return 0;

//         int l = 0, ans = 0, odd = 0;

//         for(int r = 0; r < nums.size(); r++){
//             if(nums[r] % 2) odd++;

//             while(odd > k){
//                 if(nums[l] % 2) odd--;
//                 l++;
//             }

//             ans += r - l + 1;
//         }

//         return ans;
//     }

//     int numberOfSubarrays(vector<int>& nums, int k) {
//         return atMost(nums, k) - atMost(nums, k - 1);
//     }
// };
class Solution {
public:
int atmost(vector<int>& nums, int goal){
     if(goal<0){
            return 0;
        }
     int l =0;
     int r=0;
     int sum =0;
     int cnt=0;
     int ct=0;
      while(r<nums.size()){
          if(nums[r]%2!=0){
            ct++;
            }
            
        while(ct>goal){
            if(nums[l]%2!=0){
                ct--;
            }
          l++;
        }
          
       cnt=cnt+(r-l+1);
        r++;
      }
      return cnt;
}
    
        
     
    int numberOfSubarrays(vector<int>& nums, int k) {
     
      return  atmost(nums,k)-atmost(nums,k-1);
    
    }
};
