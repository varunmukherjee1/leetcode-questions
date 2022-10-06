import java.util.ArrayList;
import java.util.HashMap;

public class Solution {

}

class TimeMap {

    HashMap<String,ArrayList<ArrayList<String>>> ds;

    public TimeMap() {
        ds = new HashMap<>();
    }
    
    public void set(String key, String value, int timestamp) {
        
        if(ds.containsKey(key)){
            ArrayList<ArrayList<String>> temp = ds.get(key);
            ArrayList<String> ts = new ArrayList<>();

            ts.add(Integer.toString(timestamp));
            ts.add(value);

            temp.add(ts);

            ds.put(key,temp);
        }
        else{
            ArrayList<ArrayList<String>> temp = new ArrayList<>();
            ArrayList<String> ts = new ArrayList<>();

            ts.add(Integer.toString(timestamp));
            ts.add(value);

            temp.add(ts);

            ds.put(key,temp);
        }
    }
    
    public String get(String key, int timestamp) {
        
        String ans = "";

        if(ds.containsKey(key)){

            ArrayList<ArrayList<String>> temp = ds.get(key);

            int lo = 0 , hi = temp.size()-1;

            int mid ;

            while(lo <= hi){
                mid = (lo + hi)/2;
                ArrayList<String> val = temp.get(mid);

                if(Integer.parseInt(val.get(0)) < timestamp){
                    lo = mid + 1;
                }
                else if(Integer.parseInt(val.get(0)) > timestamp){
                    hi = mid - 1;
                }
                else{
                    ans = val.get(1);
                    break;
                }
            }

            if(lo > hi && ans == ""){
                if(lo > 0){
                    ans = temp.get(--lo).get(1);
                }
            }

        }

        return ans;
    }
}

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap obj = new TimeMap();
 * obj.set(key,value,timestamp);
 * String param_2 = obj.get(key,timestamp);
 */