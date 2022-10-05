class Solution {
    public int minCost(String colors, int[] neededTime) {
        
        char prev = colors.charAt(0);
        int prevTime = neededTime[0];
        int n = colors.length();
        int tlen = neededTime.length;
        int ans = 0;

        for(int i = 1 ; i < n ; i++){
            char color = colors.charAt(i);

            if(color == prev){
                if(neededTime[i] < prevTime){
                    ans += neededTime[i];
                }
                else{
                    ans += prevTime;
                    prevTime = neededTime[i];
                }
            }
            else{
                prev = color;
                prevTime = neededTime[i];
            }
        }

        return ans;
    }
}