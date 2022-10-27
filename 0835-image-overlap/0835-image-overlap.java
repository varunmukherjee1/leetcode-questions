class Solution {
    public int largestOverlap(int[][] img1, int[][] img2) {
        
        int n = img1.length;
        int ans = 0;

        for(int dx = 1 -n ; dx < n ; dx++){
            for(int dy = 1 -n; dy < n ; dy++){

                int match = 0;

                for(int x = 0 ; (x < n); x++){

                    int nx = x + dx;

                    if(nx >= 0 && nx < n){

                        for(int y = 0 ; (y < n); y++){

                            int ny = y + dy;
                            
                            if(ny >= 0 && ny < n)
                                if(img1[nx][ny] == 1 && img2[x][y] == 1){
                                    match++;
                                }
                        }
                    }
                }

                ans = (ans > match)? ans:match;
            }
        }

        return ans;
    }
}