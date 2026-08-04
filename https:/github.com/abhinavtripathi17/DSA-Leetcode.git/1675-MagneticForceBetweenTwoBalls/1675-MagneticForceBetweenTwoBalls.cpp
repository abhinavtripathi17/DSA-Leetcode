// Last updated: 8/4/2026, 12:42:53 PM
class Solution {
public:

    bool canweplace(vector<int>& position ,int dist , int balls){
        int cnt_balls = 1, last = position[0];

        for(int i = 1; i<position.size(); i++){
            if(position[i] - last >= dist){
                cnt_balls++;
                last = position[i];
            }
        }
        if(cnt_balls >= balls){
            return true;
        }
        else{
            return false;
        }
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());

        int low = 1;
        int high = position[n-1]-position[0];

        while(low <= high){
            int mid = (low + high) /2 ;

            if(canweplace(position , mid , m) == true){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low - 1;
    }
};