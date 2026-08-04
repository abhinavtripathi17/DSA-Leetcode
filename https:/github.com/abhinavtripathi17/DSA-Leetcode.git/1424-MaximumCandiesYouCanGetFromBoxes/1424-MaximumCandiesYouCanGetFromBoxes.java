// Last updated: 8/4/2026, 12:44:40 PM
class Solution {
    public int maxCandies(int[] status, int[] candies, int[][] keys, int[][] containedBoxes, int[] initialBoxes) {
      int n = status.length;
        boolean[] seen = new boolean[n];
        boolean[] hasKey = new boolean[n];
        boolean[] hasBox = new boolean[n];
        Queue<Integer> q = new LinkedList<>();

        for (int box : initialBoxes) {
            hasBox[box] = true;
            if (status[box] == 1) q.offer(box);
        }

        int totalCandies = 0;

        while (!q.isEmpty()) {
            int box = q.poll();
            if (seen[box]) continue;
            seen[box] = true;

            totalCandies += candies[box];

            for (int k : keys[box]) {
                hasKey[k] = true;
                if (hasBox[k] && !seen[k]) q.offer(k);
            }

            for (int b : containedBoxes[box]) {
                hasBox[b] = true;
                if (status[b] == 1 || hasKey[b]) q.offer(b);
            }
        }

        return totalCandies; 
    }
}