class Solution {
    public String reorganizeString(String s) {
        HashMap<Character,Integer>map=new HashMap<>();
        for(int i=0;i<s.length();i++){
            char ch= s.charAt(i);
            if(map.containsKey(ch)){
                map.put(ch,map.get(ch)+1);
            }else{
                map.put(ch,1);
            }
        }
        int max =0;
        char mc=' ';
        for(int i=0;i<s.length();i++){
            char ch =s.charAt(i);
            if(map.get(ch)>max){
                max=map.get(ch);
                mc=ch;
            }
        }
        if(max>(s.length()+1)/2){
            return "";
        }
        char result []=new char[s.length()];

        int index=0;
        while(map.get(mc)>0){
            result[index]=mc;
            map.put(mc, map.get(mc) - 1);
            index+=2;
            if(index>=s.length()){
                index=1;
            }
        }
        for(char ch : map.keySet()){
            while(map.get(ch)>0){
                result[index]=ch;
                map.put(ch,map.get(ch)-1);

                index+=2;
                if(index>=s.length()){
                    index=1;
                }
            }
        }
        return new String (result);
    }
}