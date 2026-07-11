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
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        height(root,dia);
        return dia;
    }
    int height(TreeNode* node,int &maxi){
        if(!node){
            return 0;

        }
        int lh= height(node->left,maxi);
        int rh= height(node->right,maxi);
        maxi=max(maxi,lh+rh);
        return max(lh,rh)+1;
    }
};