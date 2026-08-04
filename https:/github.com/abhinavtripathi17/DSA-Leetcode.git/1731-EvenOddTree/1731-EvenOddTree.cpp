// Last updated: 8/4/2026, 12:42:33 PM
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
    bool isEvenOddTree(TreeNode* root) {
        if(root == nullptr) return true;
        
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int s = q.size();
            vector<int>ans;
            if(level % 2 == 0){
                for(int i = 0 ; i < s ; i++){
                    TreeNode* nn = q.front();
                    q.pop();
                    int data = nn->val;
                    if(nn->left != nullptr){
                        q.push(nn->left);
                    }
                    if(nn->right != nullptr){
                        q.push(nn->right);
                    }
                    if(data % 2 == 0){
                        return false;
                    }
                    ans.push_back(data);

                }
            }
            else{
                for(int i = 0 ; i < s ; i++){
                    TreeNode* nn = q.front();
                    q.pop();
                    int data = nn->val;
                    if(nn->left != nullptr){
                        q.push(nn->left);
                    }
                    if(nn->right != nullptr){
                        q.push(nn->right);
                    }
                    if(data % 2 != 0){
                        return false;
                    }
                    ans.push_back(data);
                }
            }
            if(level % 2 == 0){
                if(adjacent_find(ans.begin(), ans.end()) != ans.end())
                   return false;
               if(!is_sorted(ans.begin(), ans.end())){
                return false;
               }
            }
            else if(level % 2 != 0){
                if(adjacent_find(ans.begin(), ans.end()) != ans.end())
                   return false;
                if(!is_sorted(ans.begin(), ans.end() , greater<int>())){
                    return false;
                }
            }
            level++;

        }
        return true;
    }
    
};