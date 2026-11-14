class Solution {
public:
    int lowerBound(vector<int>& nums, int target , int start ){
        int s = start;
        int e = nums.size();

        while(s<e){
            int mid = s+(e-s)/2;
            if(nums[mid]>=target){
                e=mid;
            }else{
                s=mid+1;
            }
        }
        return s;
    }
    int upperBound(vector<int>& nums, int target , int start ){
        int s = start;
        int e = nums.size();

        while(s<e){
            int mid = s+(e-s)/2;
            if(nums[mid]>target){
                e=mid;
            }else{
                s=mid+1;
            }
        }
        return s;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        
        for(int i=0; i<nums.size(); i++){
            int min = lower - nums[i];
            int max = upper - nums[i];

            int low = lowerBound(nums,min,i+1);
            int high = upperBound(nums,max,i+1);

            ans += high-low;
        }
        return ans;
    }
};