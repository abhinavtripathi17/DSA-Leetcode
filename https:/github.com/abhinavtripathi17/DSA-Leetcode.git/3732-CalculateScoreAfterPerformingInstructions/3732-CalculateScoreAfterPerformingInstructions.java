// Last updated: 8/4/2026, 12:35:13 PM
class Solution {
    public long calculateScore(String[] instructions, int[] values) {
        int n = values.length;
        int visit[] = new int[n];
        long score = 0;

        int i = 0;
        while(i >= 0 && i < n && visit[i] == 0){
            visit[i] = 1;
            if(instructions[i].equals("jump")){
                i = i + values[i];
            }
            else{
                score += values[i];
                i++;
            }
        }
        return score;
    }
}