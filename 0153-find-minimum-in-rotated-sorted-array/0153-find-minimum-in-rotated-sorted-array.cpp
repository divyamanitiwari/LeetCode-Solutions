class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<e){
            if(nums[mid]>=nums[0]){
                s = mid + 1;
            }else{
                e = mid;
            }
            mid = s+(e-s)/2;
        }
        int pivot = s;

        int min = INT_MAX;
        s = 0;
        e = n-1;
        mid = s+(e-s)/2;

        if(nums[0]<nums[pivot]){
            return nums[0];
        }else{
            return nums[pivot];
        }

        return -1;
    }
};