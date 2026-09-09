class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n=nums.length;
        int sum=0;
        int count =0;
        int min =Integer.MAX_VALUE;
        int left=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            count++;
            while(sum>=target){
                min=Math.min(min,count);
                sum-=nums[left];
                left++;
                count--;
            }
        }
        if(min==Integer.MAX_VALUE){
            return 0;
        }
        return min;
    }
}