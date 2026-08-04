// Last updated: 8/4/2026, 12:38:27 PM
class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        int i = 0 , j = 0;
        List<int []>ll = new ArrayList<>();

        while(i < nums1.length && j < nums2.length){
            if(nums1[i][0] < nums2[j][0]){
                ll.add(new int[] {nums1[i][0] , nums1[i][1]});
                i++;
            }
            else if(nums1[i][0] > nums2[j][0]){
                ll.add(new int[] {nums2[j][0] , nums2[j][1]});
                j++;
            }
            else{
                ll.add(new int[] {nums1[i][0] , nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            }
        }
        while(i < nums1.length){
            ll.add(nums1[i]);
            i++;
        }   

        while(j < nums2.length){
            ll.add(nums2[j]);
            j++;
        }
        return ll.toArray(new int [ll.size()][]);
    }
}