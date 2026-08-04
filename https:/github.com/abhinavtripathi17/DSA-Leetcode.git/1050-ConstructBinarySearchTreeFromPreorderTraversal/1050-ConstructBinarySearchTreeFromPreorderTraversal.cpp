// Last updated: 8/4/2026, 7:10:02 PM
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size() == 0) return nullptr;

        TreeNode* root = nullptr;

        for(int x : preorder){
            root = solve(root , x);
        }

        return root;
    }

    TreeNode* solve(TreeNode* root , int val){
        if(!root){
            return new TreeNode(val);
        }

        if(root->val > val){
            root->left = solve(root -> left , val);
        }
        else{
            root->right = solve(root -> right , val);
        }

        return root;
    }
};