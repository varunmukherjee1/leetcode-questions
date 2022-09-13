public class Code {

    class Solution {
        public boolean validUtf8(int[] data) {

            int next = 0;

            for(int i: data){
                if(next == 0){

                    if(i >> 7 == 0b0){
                        next = 0;
                    }
                    else if(i >> 5 == 0b110){
                        next = 1;
                    }
                    else if(i >> 4 == 0b1110){
                        next = 2;
                    }
                    else if(i >> 3 == 0b11110){
                        next = 3;
                    }
                    else {
                        return false;
                    }
                }
                else{
                    if(i>>6 == 0b10){
                        next--;
                    }
                    else{
                        return false;
                    }
                }
            }

            if(next == 0){
                return true;
            }

            return false;
        }
    }

}