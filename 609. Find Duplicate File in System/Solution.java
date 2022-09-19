import java.util.HashMap;
import java.util.ArrayList;
import java.util.List;

class Solution {
    public static List<List<String>> findDuplicate(String[] paths) {

        HashMap<String,ArrayList<String>> data = new HashMap<>();

        List<List<String>> ans = new ArrayList<>();

        for(String s : paths){

            String[] arr = s.split(" ");

            String rootPath = arr[0];

            int len = arr.length;

            for(int i = 1 ; i < len ; i++){
                String file = arr[i];

                int o = file.indexOf("(");
                int c = file.indexOf(")");

                String content = file.substring(o, c);

                if(!data.containsKey(content)){
                    data.put(content,new ArrayList<>());
                }

                data.get(content).add(rootPath + "/" + file.substring(0,o));

            }
        }

        for(String key : data.keySet()){

            if(data.get(key).size() > 1){
                ans.add(data.get(key));
            }
        }

        return ans;        
    }
}