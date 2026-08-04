// Last updated: 8/4/2026, 7:14:11 PM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int rep = -1, miss = -1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1])
                rep = arr[i];
            else if (arr[i] - arr[i - 1] > 1)
                miss = arr[i - 1] + 1;
        }

        if (miss == -1) {
            if (arr[0] != 1) miss = 1;
            else miss = n;
        }

        return {rep, miss};
    }
};