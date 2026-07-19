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
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
        
//     }
// };
class Solution {
public:
    unordered_map<int, priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>> ump;
    int minimum = 0;
    int maximum = 0;

    void traverse(TreeNode* root, int row, int col) {
        if (root) {
            ump[col].push({row, root->val});

            minimum = min(minimum, col);
            maximum = max(maximum, col);

            traverse(root->left, row + 1, col - 1);
            traverse(root->right, row + 1, col + 1);
        }
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        traverse(root, 0, 0);

        vector<vector<int>> result;

        for (int i = minimum; i <= maximum; i++) {
            vector<int> temp;

            while (!ump[i].empty()) {
                temp.push_back(ump[i].top().second);
                ump[i].pop();
            }

            result.push_back(temp);
        }

        return result;
    }
};