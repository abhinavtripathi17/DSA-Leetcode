// Last updated: 8/4/2026, 7:22:19 PM
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
 // 200th question yeahh!!!!!!!!!!!!!!
class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        return fn_bst(nums , 0 , nums.length - 1);
    }
    public TreeNode fn_bst(int [] nums , int low , int high){
        if(low > high) return null;

        int mid = (low + high) / 2;
        TreeNode root = new TreeNode(nums[mid]);
        root.left = fn_bst(nums , low , mid - 1);
        root.right = fn_bst(nums , mid + 1 , high);

        return root;
    }
}