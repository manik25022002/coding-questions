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

    vector<int> inorderTraversal(TreeNode* root) {
        
       vector<int>inorder;
       TreeNode* cur =root;
       while(cur!=nullptr){
        if(cur->left==nullptr){
            inorder.push_back(cur->val);
            cur=cur->right;
        }
        else{
            TreeNode* prev=cur->left;
            while(prev->right && prev->right!=cur){
                prev=prev->right;
            }
            if(prev->right==nullptr){
                prev->right=cur;
                cur=cur->left;
            }
            else{
                prev->right=nullptr;
                inorder.push_back(cur->val);
                cur=cur->right;
            }
        }
       }
        return inorder;
    }
};

//  vector<int>ans;
//         inorder(root,ans);
//         return ans;



// void inorder(TreeNode* root,vector<int>&ans){
//     if(root==nullptr)return ;
//     inorder(root->left,ans);
//     ans.push_back(root->val);
//     inorder(root->right,ans);
// }



// simple method using recursion only very easy
// make function then call
// root left right then