// Last updated: 8/4/2026, 7:16:05 PM
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

    TreeNode* helper(TreeNode* root){
        if(root -> left == NULL) return root -> right;
        else if(root -> right == NULL) return root -> left;

        TreeNode* rightchild = root -> right;
        TreeNode* lastright = findlastright(root -> left);
        lastright -> right = rightchild;

        return root -> left;
    }

    TreeNode* findlastright(TreeNode* root){
        if(root -> right == NULL) return root;

        return findlastright(root -> right);
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(root -> val == key){
            return helper(root);
        }

        TreeNode *node = root;

        while(node != nullptr){
            if(node -> val > key){
                if(node -> left != nullptr && node -> left -> val == key){
                    node -> left = helper(node -> left);
                    break;
                }
                else{
                    node = node -> left;
                }
            }
            else{
                if(node -> right != nullptr && node -> right -> val == key){
                    node -> right = helper(node -> right);
                    break;
                }
                else{
                    node = node -> right;
                }
            }
        }
        return root;
    }
};