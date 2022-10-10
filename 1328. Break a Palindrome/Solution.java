class Solution {
    public String breakPalindrome(String palindrome) {
        
        int len = palindrome.length();

        if(len <= 1){
            return "";
        }
        
        for(int i = 0 ; i < len/2 ; i++){
            if(palindrome.charAt(i) != 'a'){
                return (palindrome.substring(0,i) + "a" + palindrome.substring(i+1));
            }
        }

        return (palindrome.substring(0,len-1) + "b");        
    }
}