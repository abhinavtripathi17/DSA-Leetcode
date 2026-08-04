// Last updated: 8/4/2026, 7:11:03 PM
class Solution {
    public boolean isLongPressedName(String name, String typed) {
        if(name.length() > typed.length()) return false;
        int i = 0;
        int j = 0;
        int n = typed.length() - 1;
        
        while(i < name.length() && j < typed.length()){
            if(name.charAt(i)==typed.charAt(j)){
                j++;
                i++;
            }
            else if(j > 0 && name.charAt(i-1) == typed.charAt(j)){
                j++;
            }
            else{
                return false;
            }
    
        }
        while(j < typed.length()){
            if(name.charAt(i-1) != typed.charAt(j)){
                return false;
            }
            j++;
        }
        if(i < name.length()){
            return false;
        }
        return true ;

    }
}