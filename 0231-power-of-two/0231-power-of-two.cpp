class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x = n;
        int i =0;
        while(x>0){
            if(n == (1<<i)){
                return true;
            }
            i++;
            x=x>>1;
        }
        return false;
    }
};