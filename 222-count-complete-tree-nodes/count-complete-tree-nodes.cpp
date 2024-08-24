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
    int lh(TreeNode* root) {
        int leftheight = 0;
        while (root) {
            leftheight++;
            root = root->left;
        }
        return leftheight;
    }
      int rh(TreeNode* root) {
        int rightheight = 0;
        while (root) {
            rightheight++;
            root = root->right;
        }
        return rightheight;
    }
    int countNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        int lheight=lh(root);
        int rheight=rh(root);
        if(lheight==rheight)return (1<<lheight) -1;
        else return 1+countNodes(root->left) +countNodes(root->right);
    }
};