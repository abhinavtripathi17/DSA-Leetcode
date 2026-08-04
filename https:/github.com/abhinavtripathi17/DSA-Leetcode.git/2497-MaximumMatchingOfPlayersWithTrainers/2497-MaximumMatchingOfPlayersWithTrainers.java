// Last updated: 8/4/2026, 12:38:54 PM
class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        int i = 0 , j = 0;
        int cnt = 0;
        Arrays.sort(players);
        Arrays.sort(trainers);

        while(i < players.length &&  j < trainers.length){
            if(players[i] <= trainers[j]){
                cnt++;
                i++;
            }
            j++;
        }
        return cnt;
    }
}