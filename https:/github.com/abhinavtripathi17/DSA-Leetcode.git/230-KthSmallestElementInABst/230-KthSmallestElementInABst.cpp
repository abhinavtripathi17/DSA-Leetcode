// Last updated: 8/4/2026, 7:18:28 PM
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
    int ans = -1;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root , k);
        return ans;
    }

    void inorder(TreeNode* root , int &k){

        if(root == nullptr){
            return ;
        }
        
        inorder(root->left , k);
        k--;
        if(k == 0){
            ans = root->val;
            return;
        }
        inorder(root->right , k);
    }
};