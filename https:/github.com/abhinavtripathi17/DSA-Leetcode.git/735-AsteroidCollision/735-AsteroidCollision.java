// Last updated: 8/4/2026, 7:13:27 PM
class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        int n = asteroids.length;
        Stack<Integer>st = new Stack<>();
        
        for(int i = 0 ; i < n ; i++){
            if(asteroids[i] > 0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.peek() > 0 && asteroids[i] < 0){
                    if(st.peek() < -asteroids[i]){
                        st.pop();
                        continue;
                    }
                    else if(st.peek() == -asteroids[i]){
                        st.pop();
                    }
                    asteroids[i] = 0;
                }
                if(asteroids[i] != 0){
                    st.push(asteroids[i]);
                }
            }   
        }
        int[] result = new int[st.size()];
        for(int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.pop();
        }
        return result;

    }
}