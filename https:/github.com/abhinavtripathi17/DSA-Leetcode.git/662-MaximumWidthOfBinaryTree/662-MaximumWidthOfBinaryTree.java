// Last updated: 8/4/2026, 7:14:04 PM
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
    public int widthOfBinaryTree(TreeNode root) {
        if(root == null) return 0;
        int maxwidth = 0;
        Queue<Pair<TreeNode , Integer>>q = new LinkedList<>();
        q.add(new Pair<>(root , 0));

        while(!q.isEmpty()){
            int size = q.size();
            int first = 0, last = 0;
            int min_idx = q.peek().getValue();

            for(int i = 0 ; i < size ; i++){
                Pair<TreeNode , Integer>p = q.poll();
                int idx = p.getValue() - min_idx;
                TreeNode node = p.getKey();

                if(i == 0) first = idx;
                if(i == size-1) last = idx;

                if(node.left != null){
                    q.add(new Pair<>(node.left ,2*idx+1));
                }
                if(node.right != null){
                    q.add(new Pair<>(node.right , 2*idx+2));
                }
            }
            maxwidth = Math.max(last-first+1 , maxwidth);
        }
        return maxwidth;
    }
}