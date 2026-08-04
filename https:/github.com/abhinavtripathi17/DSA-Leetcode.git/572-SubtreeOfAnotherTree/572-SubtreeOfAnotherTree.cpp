// Last updated: 8/4/2026, 7:14:53 PM
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr) return false;
        if(isContains(root , subRoot)) return true;
        return isSubtree(root->left, subRoot) || 
               isSubtree(root->right, subRoot);
    }
    bool isContains(TreeNode* r , TreeNode* s){
        if(r == nullptr && s == nullptr){
            return true;
        }
        if(r == nullptr || s == nullptr){
            return false;
        }
        if(r->val != s->val) return false;

        return (isContains(r->left , s->left) && isContains(r->right , s->right));
    }
};