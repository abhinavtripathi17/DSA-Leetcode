// Last updated: 8/4/2026, 7:10:22 PM
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int , multiset<int>>>mpp;
        queue<pair<TreeNode* , pair<int , int>>>q;
        q.push({root , {0 , 0}});

        while(!q.empty()){
            TreeNode* nn = q.front().first;
            int line = q.front().second.first;
            int level = q.front().second.second;
            q.pop();

            mpp[line][level].insert(nn->val);

            if(nn->left){
                q.push({nn->left ,{line-1 , level + 1}});
            }
            if(nn->right){
                q.push({nn->right , {line+1 , level + 1}});
            }
        }

        vector<vector<int>>ans;

        for(auto p : mpp){
            vector<int>col;
            for(auto q : p.second){
                col.insert(col.end() , q.second.begin() , q.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};