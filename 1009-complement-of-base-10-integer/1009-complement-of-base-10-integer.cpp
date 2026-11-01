class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0;
        int x = 0;
        if(n == 0){
            return 1;
        }
        while(n>0){
            int bit = n & 1;
            if(!bit == 1){
                ans = ans + pow(2,x);
            }
            x++;
            n = n >> 1;
        }
        return ans;
    }
};