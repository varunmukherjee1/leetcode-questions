class Solution {
    public int trap(int[] height) {
        
        int ans = 0;

        int l = 0;
        int r = height.length -1;
        int leftMax = height[l];
        int rightMax = height[r];

        while(l < r){

            if(height[l] <= height[r]){

                if(height[l] >= leftMax)
                    leftMax = height[l];
                else
                    ans += (leftMax-height[l]);
                
                l++;
            }
            else{

                if(height[r] >= rightMax)
                    rightMax = height[r];
                else
                    ans += (rightMax - height[r]);

                r--;
                
            }

        }

        return ans;
    }
}