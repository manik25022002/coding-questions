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
    bool ischecktree(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr)return true;
        if (left == nullptr || right == nullptr)return false;
        if (left->val != right->val)return false;
        return (ischecktree(left->left, right->right)&&ischecktree(left->right, right->left));
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)return true;
        return (ischecktree(root->left, root->right));
    }
};