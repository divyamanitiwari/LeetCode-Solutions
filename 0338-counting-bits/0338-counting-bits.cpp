class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i = 0 ; i < n+1 ; i++){
            int count = 0;
            int ele = i;
            while(ele>0){
                int bit = ele & 1;
                if(bit == 1){
                    count++;
                }
                ele = ele >> 1;
            }
            v.push_back(count);
        }
        return v;
    }
};