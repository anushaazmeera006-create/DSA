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
  
    //   void swap(TreeNode*node1,TreeNode*node2){
    //       TreeNode*temp = node1->right;
    //         node->right= node->left;
    //         node->left=temp;
            
    //   }
    TreeNode* invertTree(TreeNode* root) {
          if(root == nullptr)
            return nullptr;
      //  if(root->left!=nullptr&&root->right!=nullptr){
            swap(root->left,root->right);
            invertTree(root->left);
            invertTree(root->right);
        
     return root;
    }
};