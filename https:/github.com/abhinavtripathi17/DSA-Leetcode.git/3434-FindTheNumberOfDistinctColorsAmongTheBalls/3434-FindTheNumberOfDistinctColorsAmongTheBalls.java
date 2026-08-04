// Last updated: 8/4/2026, 12:36:30 PM
class Solution {
    public int[] queryResults(int limit, int[][] queries) {
        Map<Integer , Integer>ball_cnt = new HashMap<>();
        Map<Integer , Integer>color_cnt = new HashMap<>();
        int result [] = new int [queries.length];
        int counter = 0;

        for(int i = 0 ; i < queries.length ; i++){
            int ball = queries[i][0];
            int color = queries[i][1];

            if(ball_cnt.containsKey(ball)){
                int ball_color = ball_cnt.get(ball);
                color_cnt.put(ball_color , color_cnt.get(ball_color)-1);
                if(color_cnt.get(ball_color) == 0) counter--;
            }

            ball_cnt.put(ball , color);

            if(!color_cnt.containsKey(color) || color_cnt.get(color) == 0){
                counter++;
            }
            color_cnt.put(color , color_cnt.getOrDefault(color , 0)+1);

            result[i] = counter;
        }
        return result;
    }
}