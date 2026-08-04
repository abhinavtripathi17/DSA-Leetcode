// Last updated: 8/4/2026, 7:22:37 PM
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
    bool isValidBST(TreeNode* root) {
        return solve(root , LONG_MIN , LONG_MAX);
    }

    bool solve(TreeNode* root ,long leftVal , long rightVal){
        if(root == nullptr){
            return true;
        }

        if(root->val <= leftVal || root->val >= rightVal){
            return false;
        }
        

        bool left = solve(root->left , leftVal , root->val);
        bool right = solve(root->right , root->val , rightVal);

        return left && right;
    }
};