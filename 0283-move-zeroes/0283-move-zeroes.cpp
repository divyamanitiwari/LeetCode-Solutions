class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0;
        int f = 0;
        while(f<nums.size()){
            if(nums[s]!=0 && nums[f]!=0){
                s++;
                f++;
            }else if(nums[s]==0 && nums[f]!=0){
                swap(nums[s],nums[f]);
                f++;
                s++;
            }else{
                f++;
            }
        }
    }
};