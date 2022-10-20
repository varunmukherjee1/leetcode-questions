// import java.util.HashMap;

class Solution {

    String helper(int num , HashMap<Integer,String> mp){

        if(num <= 0)    return "";

        if(num >= 1000){
            return mp.get(1000) + helper(num - 1000,mp);
        }
        
        if(num >= 900){
            return mp.get(900) + helper(num - 900,mp);
        }

        if(num >= 500){
            return mp.get(500) + helper(num - 500,mp);
        }

        if(num >= 400){
            return mp.get(400) + helper(num - 400,mp);
        }

        if(num >= 100){
            return mp.get(100) + helper(num - 100,mp);
        }

        if(num >= 90){
            return mp.get(90) + helper(num - 90,mp);
        }

        if(num >= 50){
            return mp.get(50) + helper(num - 50,mp);
        }

        if(num >= 40){
            return mp.get(40) + helper(num - 40,mp);
        }

        if(num >= 10){
            return mp.get(10) + helper(num - 10,mp);
        }

        if(num >= 9){
            return mp.get(9) + helper(num - 9,mp);
        }

        if(num >= 5){
            return mp.get(5) + helper(num - 5,mp);
        }

        if(num >= 4){
            return mp.get(4) + helper(num - 4,mp);
        }

        
        return mp.get(1) + helper(num - 1,mp);
    }

    public String intToRoman(int num) {

        HashMap<Integer,String> mp = new HashMap<>();

        mp.put(1,"I");
        mp.put(4,"IV");
        mp.put(5,"V");
        mp.put(9,"IX");
        mp.put(10,"X");
        mp.put(40,"XL");
        mp.put(50,"L");
        mp.put(90,"XC");
        mp.put(100,"C");
        mp.put(400,"CD");
        mp.put(500,"D");
        mp.put(900,"CM");
        mp.put(1000,"M");
        
        return helper(num,mp);
    }
}