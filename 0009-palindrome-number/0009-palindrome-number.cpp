class Solution {
public:
    bool isPalindrome(int x) {
        //tc = O(n) and sc = O(n) where n is the number of digit in x ;
        if(x<0){
            return false;
        }
        string a;
        while(x>0){
            a.push_back(x%10);
            x=x/10;
        }
        int s = 0;
        int e = a.size()-1;
        while(s<e){
            if(a[s]!=a[e]){
                return false;
            }else{
                s++;
                e--;
            }
        }
        return true;

    }
};