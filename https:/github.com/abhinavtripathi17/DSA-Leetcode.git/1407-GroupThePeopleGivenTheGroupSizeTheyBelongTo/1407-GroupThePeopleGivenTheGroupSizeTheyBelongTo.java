// Last updated: 8/4/2026, 12:44:56 PM
class Solution {
    public List<List<Integer>> groupThePeople(int[] arr) {
        List<List<Integer>> list=new ArrayList<List<Integer>>();
        
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=0){
                int j=i+1;
                List<Integer> ans=new ArrayList<>();
                int n=arr[i]-1;
                ans.add(i);

                while(n!=0){
                    if(arr[i]==arr[j]){
                        ans.add(j);
                        arr[j]=0;
                        n--;
                    }
                    j++;

                }
                list.add(ans);
            }
        }
        return list;

    }    
}