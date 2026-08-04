// Last updated: 8/4/2026, 12:40:04 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin() , cost.end());

        int free = 0;
        int buyCost = 0;
        
        for(int i = n-1 ; i >= 0 ; i--){
            if(free == 2){
                free = 0;
            }
            else{
                buyCost += cost[i];
                free++;
            }
        }
        return buyCost;
    }
};