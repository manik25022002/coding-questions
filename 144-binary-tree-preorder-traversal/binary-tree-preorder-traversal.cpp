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
void preorder(TreeNode* root,vector<int>&ans){
     if(root==nullptr)return ;
     ans.push_back(root->val);
     preorder(root->left,ans);
     preorder(root->right,ans);

}
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int>ans;
        preorder(root,ans);
        return ans;

   

        // solution is done through iterative approach......
        // vector<int> ans;
        // if (root == nullptr)
        //     return ans;
        // stack<TreeNode*> s;
        // s.push(root);
        // while (!s.empty()) {
        //     root = s.top();
        //     s.pop();
        //     ans.push_back(root->val);
        //      if (root->right != nullptr)
        //         s.push(root->right);
        //     if (root->left != nullptr)
        //         s.push(root->left);
        // }
        // return ans;
    }
};

// simple method using recursion only very easy
// make function then call
// root left right then