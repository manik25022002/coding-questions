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
    bool value;

public:
    bool evaluateTree(TreeNode* root) {
        if (root->val == 0)
            return false;
        if (root->val == 1)
            return true;

        if (root->val == 2 || root->val == 3) {
            bool left_value = evaluateTree(root->left);
            bool right_value = evaluateTree(root->right);

            if (root->val == 3) {
                value = left_value && right_value;
                return value;
            }

            if (root->val == 2) {
                value = left_value || right_value;
                return value;
            }
        }
        return value;
    }
};