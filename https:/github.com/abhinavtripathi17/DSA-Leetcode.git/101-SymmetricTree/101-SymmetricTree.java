// Last updated: 8/4/2026, 7:22:32 PM
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        if(root == null) return true;
        return ismirror(root.left , root.right);
    }
    public boolean ismirror(TreeNode left , TreeNode right){
        if(left != null && right != null){
            boolean a = ismirror(left.left , right.right);
            boolean b = ismirror(left.right , right.left);
            if(left.val == right.val && a && b){
                return true;
            }
            else return false;
        }
        else if(left == null && right == null){
            return true;
        }
        else{
            return false;
        }
    }
}