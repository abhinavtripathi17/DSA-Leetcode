// Last updated: 8/4/2026, 7:16:53 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        priority_queue<pair<int , int>>pq;

        int cnt = 1;

        for(int i = 1 ; i < n ; i++){
            if(nums[i] == nums[i-1]){
                cnt++;
            }
            else{
                pq.push({cnt , nums[i-1]});
                cnt = 1;
            }
        }
        pq.push({cnt , nums.back()});

        vector<int>ans;

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};