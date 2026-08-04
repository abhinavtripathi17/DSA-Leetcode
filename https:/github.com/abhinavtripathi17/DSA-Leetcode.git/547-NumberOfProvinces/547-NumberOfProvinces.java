// Last updated: 8/4/2026, 7:15:02 PM
class Solution {
    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;

        int visit[] = new int [n+1];
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(visit[i] == 0){
                cnt++;
                dfs(isConnected , i , visit);
            }
        }  
        return cnt;
        
    }
    public void dfs(int[][] isConnected , int node , int visit[]){
        visit[node] = 1;

        for(int j = 0 ; j < isConnected.length ; j++){
            if(isConnected[node][j] == 1 && visit[j] == 0){
                visit[j] = 1;
                dfs(isConnected , j , visit);
            }
        }
    }
}