class Solution {
public:
    int binarySearch(vector<int>& nums, int target,int s, int e){
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int s =0;
        int e = nums.size();
        int change = -1;

        while(s<e){
            int mid = s+(e-s)/2;
            if(nums[0]<=nums[mid] && mid+1<nums.size() && nums[mid]<nums[mid+1]){
                s=mid+1;
            }else{
                change=mid;
                e=mid;
            }
        }
        if(target==nums[change]){
            return change;
        }
        if(nums[0]<=target && nums[change] > target){
            s=0;
            e=change-1; 
            return binarySearch(nums, target ,s ,e);
        }
        else{
            s=change+1;
            e=nums.size()-1;
            return binarySearch(nums, target ,s ,e);
        }
    }
};