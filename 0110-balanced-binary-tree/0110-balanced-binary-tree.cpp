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
// bool depth(TreeNode*node){
//     int l=0;
//     int r=0;
    
//     while(node->left!=NULL){
//         node = node->left;
//          l++;
//     }
//         while(node->right!=NULL){
//         node = node->right;
//          l++;
//     }
//   if(l-r<=1&&l-r>=0){
//     return true;
// }
// return false;
// }
//     bool isBalanced(TreeNode* root) {
//     bool val= depth(root);
//     bool val2= true;
//       if(root->left!=NULL){
//         val = depth(root->left);
//         root = root->left;
//       }
//       if(root->left!=NULL){
//         val = depth(root->left);
//         root=root->right;
      
//       }
//       val = val&&val2;
//       return val;
//     }
// };
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

    bool isBalanced(TreeNode* root) {
      return check(root)!=-1;
    }
    int check(TreeNode *node){
         if(node ==NULL){
            return 0;
         }
        int lh= check(node->left);
        if(lh==-1){
            return -1;
        }
         int rh= check(node->right);
        if(rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return max(lh,rh)+1;
    }
};