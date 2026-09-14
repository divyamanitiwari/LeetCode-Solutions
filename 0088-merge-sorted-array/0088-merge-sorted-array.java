class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int arr [] =new int [m+n];
        int x=0;
        int y=0;
        int i=0;
        while(x < m && y < n){
            if(nums1[x]<=nums2[y]){
                arr[i]=nums1[x];
                x++;
                i++;
                continue;
            }else if(nums1[x]>nums2[y]){
                arr[i]=nums2[y];
                y++;
                i++;
                continue;
            }
        }
        while(x < m){
            arr[i] = nums1[x];
            i++;
            x++;
        }
        while(y < n){
            arr[i] = nums2[y];
            i++;
            y++;
        }
        for(int j = 0; j < m + n; j++){
            nums1[j] = arr[j];
        }
    }
}