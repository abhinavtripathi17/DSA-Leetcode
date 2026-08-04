// Last updated: 8/4/2026, 7:12:54 PM
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr){
            return root;
        }

        TreeNode* ans = nullptr;
        solve(root , val , ans);

        return ans;
    }

    void solve(TreeNode* root, int val , TreeNode* &ans){
        if(root == nullptr){
            return;
        }

        if(root->val == val){
            ans = root;
            return ;
        }
        else if(root->val < val){
            solve(root->right , val , ans);
        }
        else{
            solve(root->left , val , ans);
        }
    }

    
};