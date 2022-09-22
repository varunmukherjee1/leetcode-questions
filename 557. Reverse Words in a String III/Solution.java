import java.util.ArrayList;

class Solution {
    public String reverseWords(String s) {
        
        String[] strArr = s.split(" ");

        String ans = "";

        int len = strArr.length;

        for(int i = 0 ; i < len ; i++){

            StringBuilder sb = new StringBuilder(strArr[i]);
            sb.reverse();

            if(i != len-1){
                ans += sb.toString() + " ";
            }
            else{
                ans += sb.toString();
            }
        }

        return ans;
    }
}