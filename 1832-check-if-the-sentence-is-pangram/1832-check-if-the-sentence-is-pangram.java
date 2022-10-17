class Solution {
    public boolean checkIfPangram(String sentence) {
        
        HashSet<Character> st = new HashSet<>();

        int len = sentence.length();

        for(int i = 0 ; i < len ; i++){
            st.add(sentence.charAt(i));
        }

        return (st.size() >= 26);
    }
}