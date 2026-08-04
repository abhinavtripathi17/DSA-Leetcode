// Last updated: 8/4/2026, 12:32:57 PM
class Solution {
public:
    int maxDistance(string moves) {
        int n = moves.length();
        int x = 0 , y = 0;
        int blank = 0;

        for(int i = 0 ; i < n ; i++){
            if(moves[i] == 'U'){
                y++;
            }
            else if(moves[i] == 'D'){
                y--;
            }
            else if(moves[i] == 'L'){
                x--;
            }
            else if(moves[i] == 'R'){
                x++;
            }
            else{
                blank++;
            }
            
        }
        x = abs(x);
        y = abs(y);
        

        if(blank > 0){
            if(abs(x) > abs(y)){
                x += blank;
            }
            else{
                y += blank;
            }
        }

        int ans = x + y;

        return ans;
    }
};