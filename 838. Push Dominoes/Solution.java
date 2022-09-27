import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    public String pushDominoes(String dominoes) {

        int len = dominoes.length();

        int[] left = new int[len];
        int[] right = new int[len];

        Arrays.fill(left,0);
        Arrays.fill(right,0);

        int time = 1;
        char prev = '.';

        for( int i = 0 ; i < len ; i++){

            if(dominoes.charAt(i) == 'R'){
                prev = 'R';
                time = 1;
                continue;
            }
            else if(dominoes.charAt(i) == 'L'){
                prev = 'L';
            }
            else if(prev == 'R' && dominoes.charAt(i) == '.'){
                right[i] = time;
                time++;
            }
        }

        prev = '.';
        time = 1;

        for( int i = len -1 ; i >= 0 ; i--){

            if(dominoes.charAt(i) == 'L'){
                prev = 'L';
                time = 1;
                continue;
            }
            else if(dominoes.charAt(i) == 'R'){
                prev = 'R';
            }
            else if(prev == 'L' && dominoes.charAt(i) == '.'){
                left[i] = time;
                time++;
            }
        }

        String res = "";

        for(int i=0;i<len;i++)
        {
            if(left[i]==0 && right[i] == 0)
            {
                res += dominoes.charAt(i);
            }
            else if(left[i] == 0)
            {
                res += 'R';
            }
            else if(right[i] == 0)
            {
                res += 'L';
            }
            else if(left[i] == right[i])
            {
                res += '.';
            }
            else if(left[i] < right[i])
            {
                res += 'L';
            }
            else 
            {
                res += 'R';
            }
        }

        return res;
    }
}