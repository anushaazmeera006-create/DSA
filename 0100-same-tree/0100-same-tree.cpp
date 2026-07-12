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
//      vector<vector<int>> lot(TreeNode*root){
//          if(root==NULL)  {
//            return {};

//        }
//        queue<TreeNode*> que;
//           vector<vector<int>> arr;
//        que.push(root);
//        int level =0;
//        while(!que.empty()){
//         int len =que.size();
//         arr.push_back({});
//         for(int i =0;i<len;i++){
//             TreeNode* node=que.front();
//              que.pop();
//              if(node!=NULL){
//              arr[level].push_back(node->val);
//              }
//              else{
//                 arr[level].push_back(0);
//              }
//              if(node->left)
//           que.push(node->left);
//               else
//              que.push(NULL);

//             if(node->right)
//            que.push(node->right);
//              else
//           que.push(NULL);
        
//         }
//         level++;
//        }
//        return arr;
//      }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//        vector<vector<int>>p1 =lot( p);
//           vector<vector<int>>q1 =lot( q);
//           return p1==q1;
//     }
// };
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

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return lot(p) == lot(q);
    }
};