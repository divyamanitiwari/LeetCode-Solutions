class Solution {
    public int reverse(int x) {
        long r = 0;
        int num = 0;
        
        while(x != 0){
            num = x % 10;
            r = r * 10 + num;
            x = x / 10;
        }
        if (r > Integer.MAX_VALUE || r < Integer.MIN_VALUE) {
            return 0;
        }
        
        return (int) r; 
    }
}