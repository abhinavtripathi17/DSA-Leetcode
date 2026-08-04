// Last updated: 8/4/2026, 7:22:22 PM
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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>>res;
        if(root == nullptr){
            return res;
        }

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();
            vector<int>temp;

            for(int i = 0 ; i < sz ; i++){
                TreeNode* nn = q.front();
                int val = nn->val;
                q.pop();
                temp.push_back(val);

                if(nn->left){
                    q.push(nn->left);
                }
                if(nn->right){
                    q.push(nn->right);
                }
            }
            res.push_back(temp);
            
        }

        return res;
    }
};