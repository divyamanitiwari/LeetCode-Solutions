class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n =s.length();
        int max=0;
        for(int i=0;i<n;i++){
            HashSet<Character> set = new HashSet<>();
            int count=0;
            for(int j =i;j<n;j++){
                char ch =s.charAt(j);
                if(!set.contains(ch)){
                    set.add(ch);
                    count++;
                }else{
                    break;
                }
                max=Math.max(max,count);
            }
        }
        return max;
    }
}