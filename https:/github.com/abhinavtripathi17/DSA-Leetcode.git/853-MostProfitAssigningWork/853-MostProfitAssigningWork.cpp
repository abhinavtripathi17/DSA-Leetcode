// Last updated: 8/4/2026, 7:12:09 PM
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
         int n = difficulty.size();
    int m = worker.size();
    
    // Create and sort jobs by difficulty
    vector<pair<int, int>> jobs;
    for (int i = 0; i < n; ++i) {
        jobs.emplace_back(difficulty[i], profit[i]);
    }
    sort(jobs.begin(), jobs.end());
    
    // Sort workers by their ability
    sort(worker.begin(), worker.end());
    
    int maxProfit = 0, totalProfit = 0, jobIndex = 0;
    
    for (int w : worker) {
        // Update maxProfit with the most profitable job the worker can do
        while (jobIndex < n && jobs[jobIndex].first <= w) {
            maxProfit = max(maxProfit, jobs[jobIndex].second);
            ++jobIndex;
        }
        totalProfit += maxProfit;
    }
    
    return totalProfit;

    }
};