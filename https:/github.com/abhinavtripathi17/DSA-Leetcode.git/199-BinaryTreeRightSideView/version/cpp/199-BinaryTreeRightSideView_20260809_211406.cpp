// Last updated: 8/9/2026, 9:14:06 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<int> rightSideView(TreeNode* root) {
15        vector<int>ans;
16        rightSideView(root , 0 , ans);
17        return ans;
18    }
19
20    void rightSideView(TreeNode* root , int level , vector<int>& ans){
21        if(root == nullptr){
22            return;
23        }
24        if(level == ans.size()){
25            ans.push_back(root->val);
26        }
27
28        rightSideView(root->right , level+1 , ans);
29        rightSideView(root->left , level+1 , ans);
30    }
31};