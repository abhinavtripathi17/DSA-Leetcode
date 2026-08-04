// Last updated: 8/4/2026, 7:09:33 PM
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
    int maxLevelSum(TreeNode* root) {
        int anslevel = 0;
        int currentlevel = 1;
        int maxsum = INT_MIN;

        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            int n = q.size();
            int sum = 0;

            while(n--){
                TreeNode* node = q.front();
                q.pop();

                int x = node->val;
                sum += x;

                if(node -> left){
                    q.push(node->left);
                }
                if(node -> right){
                    q.push(node -> right);
                }

            }

            if(sum > maxsum){
                maxsum = sum;
                anslevel = currentlevel;
            }
            currentlevel++;

        }
        return anslevel;
    }
};