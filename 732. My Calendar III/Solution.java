import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;

class MyCalendarThree {

    HashMap<Integer,Integer> mp;
    
    public MyCalendarThree() {
        mp = new HashMap<>();
    }
    
    public int book(int start, int end) {

        if(mp.get(start) != null){
            mp.put(start,mp.get(start) + 1);
        }
        else{
            mp.put(start,+1);
        }  
        
        if(mp.get(end) != null){
            mp.put(end,mp.get(end) -1);
        }
        else{
            mp.put(end,-1);
        }

        ArrayList<Integer> arr = new ArrayList<>();

        mp.forEach((key,val) -> {
            arr.add(key);

        });

        Collections.sort(arr);

        int ans = 0;
        int len = arr.size();

        int temp = 0;

        for(int i = 0 ; i < len ; i++){

            int key = arr.get(i);

            int val = mp.get(key);
            int newVal = ans + val;
            temp += val;

            ans = (ans > temp)? ans:temp;
        }

        return ans;
    }
}

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree obj = new MyCalendarThree();
 * int param_1 = obj.book(start,end);
 */

 public class Solution {

}