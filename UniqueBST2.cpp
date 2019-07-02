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
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0) return vector<TreeNode*>();
        return helper(1, n);
    }
    
    vector<TreeNode*> helper(int start, int n){
        vector<TreeNode*> ans;
        // the case when n is 0
        if(start > n){
            ans.push_back(nullptr);
            return ans;
        }
        // other cases: i represents the root
        for(int i = start; i <= n; ++i){
            vector<TreeNode*> leftTrees = helper(start, i-1);
            vector<TreeNode*> rightTrees = helper(i+1, n);
            // mix and combine all leftTrees with all rightTrees
            for(TreeNode* leftTree : leftTrees){
                for(TreeNode* rightTree : rightTrees){
                    TreeNode* temp = new TreeNode(i);
                    temp->left = leftTree;
                    temp->right = rightTree;
                    temp->val = i;
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
