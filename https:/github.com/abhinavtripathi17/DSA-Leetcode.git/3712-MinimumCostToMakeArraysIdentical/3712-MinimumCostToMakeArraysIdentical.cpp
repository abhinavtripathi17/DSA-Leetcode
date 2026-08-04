// Last updated: 8/4/2026, 12:35:26 PM
class Solution {
public:
    
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n=arr.size();
        long long temp=0;
        for(int i=0;i<n;i++){
            temp+=abs(arr[i]-brr[i]);
        
        }
        vector<int>v1=arr;
        vector<int>v2=brr;
        long long ans=k;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<n;i++)ans+=abs(v1[i]-v2[i]);

        return min(ans,temp);
    }
};