/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
      int maxi=INT_MIN;
        height(root,maxi);
        return maxi;
    }
    // int sum(TreeNode* node,int summi){
    //      if(node==NULL){
    //         return 0;
    //      }
    //      left= node->left->val+left;
    //     int lh =sum(node->left);
    //      right= node->right->val+right;
    //     int rh =sum(node->right);
        
    //      summi = max(summi,left+right);
    //      return max(rh,lh)+1;
    // }
        int height(TreeNode* node,int &maxi ){
       
        if(node==NULL){
            return 0;
        }
       //int   left= node->left->val+left;
        int left=max(0, height(node->left,maxi));
       // int    right= node->right->val+right;
        int right= max(0,height(node->right,maxi));
        maxi=max(maxi,left+right+node->val);
        return node->val+max(left,right);
    }
};