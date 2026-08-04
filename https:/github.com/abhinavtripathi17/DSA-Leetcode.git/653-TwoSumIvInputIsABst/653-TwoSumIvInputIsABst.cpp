// Last updated: 8/4/2026, 7:14:03 PM
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
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        inorder(root , ans);

        int i = 0 , j = ans.size()-1;

        while(i < j){
            int sum = ans[i] + ans[j];
            if(sum == k){
                return true;
            }
            else if(sum > k){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }

    void inorder(TreeNode* root , vector<int>&ans){
        if(root == nullptr){
            return;
        }

        inorder(root->left , ans);
        ans.push_back(root->val);
        inorder(root->right , ans);
    }
};