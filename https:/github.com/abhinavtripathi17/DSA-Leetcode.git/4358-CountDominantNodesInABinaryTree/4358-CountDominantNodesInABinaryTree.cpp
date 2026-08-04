// Last updated: 8/4/2026, 12:32:33 PM
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
    int countDominantNodes(TreeNode* root) {
        int ans = 0;
        postOrder(root , ans);

        return ans;
    }
    int postOrder(TreeNode* root ,int &ans){
        if(root == nullptr){
            return INT_MIN;
        }

        int left = postOrder(root->left , ans);
        int right = postOrder(root->right , ans);

        int maxi = max({ left , right});

        if(root->val >= maxi){
            maxi = root->val;
            ans++;
        }

        return maxi;
    }
};