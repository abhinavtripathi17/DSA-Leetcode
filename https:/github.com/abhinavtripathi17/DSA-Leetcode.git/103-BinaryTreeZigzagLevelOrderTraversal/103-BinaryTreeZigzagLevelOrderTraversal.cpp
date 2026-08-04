// Last updated: 8/4/2026, 7:22:18 PM
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root == nullptr){
            return res;
        }

        bool rev = true;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();
            vector<int>temp(sz , 0);

            for(int i = 0 ; i < sz ; i++){
                TreeNode* nn = q.front();
                int val = nn->val;
                q.pop();

                int idx = rev ? i : sz - 1 - i;
                temp[idx] = val;
                
                if(nn->left){
                    q.push(nn->left);
                }
                if(nn->right){
                    q.push(nn->right);
                }
            }
            rev = !rev;
            res.push_back(temp);
            
        }

        return res;
    }
};