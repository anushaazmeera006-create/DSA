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
 vector<vector<int>> lot(TreeNode* root) {
        if (root == NULL)
            return {};

        queue<TreeNode*> que;
        vector<vector<int>> arr;

        que.push(root);

        while (!que.empty()) {
            int len = que.size();
            vector<int> level;
            bool hasRealNode = false;

            for (int i = 0; i < len; i++) {
                TreeNode* node = que.front();
                que.pop();

                if (node == NULL) {
                    level.push_back(INT_MIN);   // NULL marker
                    continue;
                }

                hasRealNode = true;
                level.push_back(node->val);

                if (node->left)
                    que.push(node->left);
                else
                    que.push(NULL);

                if (node->right)
                    que.push(node->right);
                else
                    que.push(NULL);
            }

            arr.push_back(level);

            // Stop if next level contains only NULLs
            if (!hasRealNode)
                break;
        }

        return arr;
    }

    bool isSymmetric(TreeNode* root) {
     vector<vector<int>> ans1= lot(root->left);
       vector<vector<int>> ans2= lot(root->right);
       for(int i=0;i<ans2.size();i++){
        
 reverse(ans2[i].begin(), ans2[i].end());
        
       }
       return ans1==ans2;
    }
};