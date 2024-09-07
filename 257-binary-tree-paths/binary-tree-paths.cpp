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
    vector<string>ans;
public:
void getpath(TreeNode* root,string path){
    if(root == nullptr)return;
      if(!path.empty()){
  path=path+"->";
    }
    path = path + to_string(root->val);
    if(root->left == nullptr && root->right==nullptr){
        ans.push_back(path);
    }
    else{
    getpath(root->left,path);
    getpath(root->right,path);
    }

}
    vector<string> binaryTreePaths(TreeNode* root) {
        string path;
        getpath(root,"");
        return ans;
    }
};