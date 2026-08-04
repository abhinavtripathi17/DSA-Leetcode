// Last updated: 8/4/2026, 7:21:52 PM
class Solution {
     public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<>();
        for (int i = 1; i <= numRows; i++) {
            result.add(generateRow(i));
        }
        return result;
    }

    List<Integer> generateRow(int row) {
        List<Integer> ansRow = new ArrayList<>();
        int ans = 1;
        ansRow.add((int) ans);

        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / i;
            ansRow.add(ans);
        }
        return ansRow;
    }
}