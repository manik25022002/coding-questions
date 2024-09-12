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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size())return nullptr;
        map<int, int> inmap;
        for (int i = 0; i < inorder.size(); i++) {
            inmap[inorder[i]] = i;
        }
        TreeNode* root = funct(inorder, 0, inorder.size()-1, postorder, 0,
                               postorder.size()-1, inmap);
        return root;
    }
     TreeNode* funct(vector<int>& inorder, int instart, int inend,
                    vector<int>& postorder, int poststart, int postend,
                    map<int, int>& inmap) {
        if (instart > inend || poststart > postend)
            return nullptr;
        TreeNode* root = new TreeNode(postorder[postend]);
        int inroot = inmap[postorder[postend]];
        int numsleft = inroot - instart;

        root->left = funct(inorder, instart, inroot - 1, postorder, poststart,
                           poststart + numsleft - 1, inmap);

        root->right = funct(inorder, inroot + 1, inend, postorder,
                            poststart + numsleft, postend - 1, inmap);
        return root;
    }
};