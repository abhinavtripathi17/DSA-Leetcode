// Last updated: 8/4/2026, 7:08:52 PM
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
    TreeNode* balanceBST(TreeNode* root) {
        if(root == nullptr){
            return root;
        } 
        vector<int>inorder;
        inorderTraversal(root , inorder);
        return balance(inorder , 0 , inorder.size()-1);
    }

    void inorderTraversal(TreeNode* root , vector<int>& inorder){
        if(root == nullptr) return;
        inorderTraversal(root->left , inorder);
        inorder.push_back(root->val);
        inorderTraversal(root->right , inorder);
    }
    TreeNode* balance(vector<int>&inorder , int l , int r){
        if(l > r) return nullptr;

        int mid = (l + r)/2;
        TreeNode* tree = new TreeNode(inorder[mid]);
        tree->left = balance(inorder , l , mid-1);
        tree->right = balance(inorder , mid+1 , r);
        return tree;

    }
};