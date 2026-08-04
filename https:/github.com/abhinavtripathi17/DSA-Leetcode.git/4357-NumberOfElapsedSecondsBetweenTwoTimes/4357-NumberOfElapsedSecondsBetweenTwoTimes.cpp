// Last updated: 8/4/2026, 12:32:34 PM
class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int n = startTime.length();

        int sHr = stoi(startTime.substr(0 , 2)) * 60 * 60;
        int sMn = stoi(startTime.substr(3 , 2)) * 60 ;
        int sSec = stoi(startTime.substr(6 , 2));

        int eHr = stoi(endTime.substr(0 , 2)) * 60 * 60;
        int eMn = stoi(endTime.substr(3 , 2)) * 60;
        int eSec = stoi(endTime.substr(6 , 2));
        

        int ans = (eHr - sHr) + (eMn -sMn )+ (eSec - sSec); 

        return ans;
    }
};