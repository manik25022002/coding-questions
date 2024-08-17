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
    vector<vector<int>> level(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> level;
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                level.push_back(node->val);
                q.pop();
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>right=level(root);
        vector<int>res;
        for(auto it:right){
            res.push_back(it.back());
        }
        return res;
    }
};