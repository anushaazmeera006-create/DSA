// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//          vector<vector<int>>  ans;
//         if(root==nullptr){
//             return {};
//         }
//         queue<TreeNode*> q;
//         q.push(root);
//         int currlevel=0;
//         while(!q.empty()){
//             int len = q.size();
//             ans.push_back({});

        
//         for(int i =0;i<len;i++){
//             TreeNode*curr=q.front();
//              q.pop();
//              ans[currlevel].push_back(curr->val);
//               if(curr->left!=nullptr){
//                 q.push(curr->left);
//               }
//                if(curr->right!=nullptr){
//                 q.push(curr->right);
//               }
//         }
//              currlevel++; 
//         }
//      return ans;
//     }
//     void reverse(vector<int>arr){
//         for(int i=0;i<arr.size()/2;i++){
//             int temp =arr[arr.size()-i-1];
//             arr[arr.size()-i-1]=arr[i];
//             arr[i]=temp;

//         }
//     }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>>  ans=LevelOrder(root);
//          vector<vector<int>>nums;
//         for(int i =0;i<ans.size();i++){
//            // for(int j =0;j<ans[0].size();j++){
                 
//                 if(i%2!=0){
//                   reverse(ans[0]);  
//                 }
//                 nums.push_back(ans[i]);
            
//         }
//         return nums;
//     }
// };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == nullptr)
            return {};

        queue<TreeNode*> q;
        q.push(root);

        int currlevel = 0;

        while(!q.empty()) {
            int len = q.size();
            ans.push_back({});

            for(int i = 0; i < len; i++) {
                TreeNode* curr = q.front();
                q.pop();

                ans[currlevel].push_back(curr->val);

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            currlevel++;
        }

        return ans;
    }

    void reverse(vector<int> &arr) {
        for(int i = 0; i < arr.size()/2; i++) {
            swap(arr[i], arr[arr.size()-i-1]);
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans = levelOrder(root);

        for(int i = 0; i < ans.size(); i++) {
            if(i % 2 == 1) {
                reverse(ans[i]);
            }
        }

        return ans;
    }
};