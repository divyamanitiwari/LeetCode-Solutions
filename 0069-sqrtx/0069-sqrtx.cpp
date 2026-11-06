class Solution {
public:
    int mySqrt(int x) {
        int s = 0 ;
        int e = x ;
        long long int mid = s+(e-s)/2;

        long long int ans =-1;
        long long int sqr = mid * mid;
        while(s<=e){
            sqr = mid * mid;
            if(sqr == x){
                return mid;
            }else if(sqr > x){
                e = mid -1;
            }else if(sqr < x){
                ans =mid;
                s = mid + 1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};