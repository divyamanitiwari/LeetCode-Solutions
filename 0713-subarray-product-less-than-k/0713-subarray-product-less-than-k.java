class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
       int count =0;
       int pro =1;
       int n=nums.length;
       for(int i=0;i<n;i++){
        pro*=nums[i];
        if(pro<k){
            count++;
        }
        for(int j=i+1;j<n;j++){
            pro*=nums[j];
            if(pro<k){
                count++;
            }else{
                break;
            }
        }
        pro=1;
       }
        return count;
    }
}