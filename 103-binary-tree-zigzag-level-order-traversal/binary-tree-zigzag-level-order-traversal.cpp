/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool left_to_right = 1;
        while (!q.empty()) {
            int n = q.size();
            vector<int> level(n);
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                int index = (left_to_right) ? i : n - i - 1;
                level[index]=node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);

            }
            left_to_right = !(left_to_right);
            ans.push_back(level);
        }
        return ans;
    }
};