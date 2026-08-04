// Last updated: 8/4/2026, 7:26:00 PM
class Solution {
    public List<String> generateParenthesis(int n) {
        List<String>list = new ArrayList<>();
        generate(n , 0 , 0 , "" , list);
        return list;
    }
    public static void generate(int n , int op , int cl , String ans , List<String>ll){
        if(op == n && cl == n){
            ll.add(ans);
            return;
        }
        if(op < n){
            generate(n , op + 1 , cl , ans + "(" , ll);
        }
        if(op > cl){
            generate(n , op , cl + 1 , ans + ")" , ll);
        }

    }
}