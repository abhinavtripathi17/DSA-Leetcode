// Last updated: 8/4/2026, 7:22:40 PM
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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        TreeNode* curr = root;

        stack<TreeNode*>st;
        st.push(curr);

        vector<int>ans;

        while(!st.empty()){

            if(curr != nullptr){
                st.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* node = st.top();
                st.pop();
                ans.push_back(node->val);
                curr = node->right;
            }

        }
        ans.pop_back();
        return ans;

    }
};