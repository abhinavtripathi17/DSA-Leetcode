// Last updated: 8/4/2026, 7:26:18 PM
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        List<List<Integer>>res = new ArrayList<>();

        for(int i = 0 ; i < n ; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
                int j = i+1;
                int k = n-1;

                while(j < k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum < 0){
                        j++;
                    }
                    else if(sum > 0){
                        k--;
                    }
                    else{
                        List<Integer>ll = Arrays.asList(nums[i] , nums[j] , nums[k]);
                        res.add(ll);
                        j++;
                        k--;

                        while(j < k && nums[j] == nums[j-1]) j++;
                        while(j < k && nums[k] == nums[k+1]) k--;

                    }
                }
        }
        return res; 
    }
}