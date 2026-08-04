// Last updated: 8/4/2026, 7:10:27 PM
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
    int cam = 0;
    public int minCameraCover(TreeNode root) {
        if(mincam(root) == -1) cam++;
        
        return cam;
    }
    public int mincam(TreeNode root){
        if(root == null) return 1;

        int l = mincam(root.left);
        int r = mincam(root.right);
        if(l == -1 || r == -1){
            cam++;
            return 0;
        }
        else if(l == 0 || r == 0){
            return 1;
        }
        return -1;
    }
}