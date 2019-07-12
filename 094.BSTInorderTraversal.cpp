/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == nullptr) return ans;
        if(root->left != nullptr){
            vector<int> lefttree = inorderTraversal(root->left);
            ans.insert(ans.end(), lefttree.begin(), lefttree.end());
        }
        if(root != nullptr) ans.push_back(root->val);
        if(root->right != nullptr){
            vector<int> righttree = inorderTraversal(root->right);
            ans.insert(ans.end(), righttree.begin(), righttree.end());
        }
        return ans;
    }
};
