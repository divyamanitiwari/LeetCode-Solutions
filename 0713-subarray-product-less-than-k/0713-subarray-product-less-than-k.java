class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int pro =1;
        int left=0;
        int count=0;
        int n=nums.length;
        if(k<=1){
            return 0;
        }
        for(int right=0;right<n;right++){
            pro*=nums[right];
            while(pro>=k){
                pro/=nums[left];
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
}