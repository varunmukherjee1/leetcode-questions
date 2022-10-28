class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        HashMap<String,ArrayList<String>> mp = new HashMap<>();

        for(String str : strs){

            char[] crs = str.toCharArray();
            Arrays.sort(crs);
            String temp = new String(crs);

            if(!mp.containsKey(temp))
                mp.put(temp,new ArrayList<>());
            
            mp.get(temp).add(str);
        }

        return new ArrayList(mp.values());        
    }
}