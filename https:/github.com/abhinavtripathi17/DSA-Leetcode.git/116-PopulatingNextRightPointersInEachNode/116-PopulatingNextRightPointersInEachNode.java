// Last updated: 8/4/2026, 7:22:03 PM
/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/

class Solution {
    public Node connect(Node root) {
        if(root == null) return null;
        Node current_level = root;
        while(current_level != null){
            Node curr = current_level;
            while(curr != null){
                if(curr.left != null){
                    curr.left.next = curr.right;
                }
                if(curr.right != null && curr.next != null){
                    curr.right.next = curr.next.left;
                }
                curr = curr.next; // inner loop ko end krne ke liye..
                
            }
            current_level = current_level.left;

        }
        return root;
    }
}