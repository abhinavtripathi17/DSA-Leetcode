// Last updated: 8/4/2026, 12:40:35 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="X++" || operations[i]=="++X"){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};