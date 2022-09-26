class Solution {

    public boolean equationsPossible(String[] equations) {
        
        int[] parent = new int[26];
        int[] rank = new int[26];

        for(int i = 0 ; i < 26 ; i++){
            parent[i] = i;
            rank[i] = i;
        }

        for(String str: equations){
            if(str.charAt(1) == '='){
                union(str.charAt(0) - 'a',str.charAt(3) - 'a' , parent , rank);
            }
        }

        for(String str: equations){
            if(str.charAt(1) == '!'){
                
                int px = find(str.charAt(0)-'a',parent);
                int py = find(str.charAt(3)-'a',parent);

                if(px == py){
                    return false;
                }
            }
        }
        
        return true;
    }

    void union(int x , int y , int[] parent , int[] rank){

        int px = find(x,parent);
        int py = find(y,parent);

        if(px != py){
            if(rank[px] > rank[py]){
                parent[py] = px;
            }
            else if(rank[py] > rank[px]){
                parent[px] = py;
            }
            else{
                parent[px] = py;
                rank[py]++;
            }
        }
    }

    int find(int x , int[] parent){
        if(parent[x] == x){
            return x;
        }

        int temp = find(parent[x],parent);
        parent[x] = temp;

        return temp;
    }
}