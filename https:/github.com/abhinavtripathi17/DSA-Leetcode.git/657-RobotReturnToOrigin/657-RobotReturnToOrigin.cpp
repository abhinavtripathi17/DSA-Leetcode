// Last updated: 8/4/2026, 7:13:59 PM
class Solution {
public:
    bool judgeCircle(string moves) {
        int cntUD = 0;
        int cntLR = 0;
        

        for(int i = 0 ; i < moves.length() ; i++){
            if(moves[i] == 'U'){
                cntUD++;
            }
            else if(moves[i] == 'D'){
                cntUD--;
            }
            else if(moves[i] == 'R'){
                cntLR++;
            }
            else if(moves[i] == 'L'){
                cntLR--;
            }
        }

        if(cntLR ==0 && cntUD == 0) return true;
        return false;
    }
};