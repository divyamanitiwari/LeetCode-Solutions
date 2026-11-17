class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr [m+n];
        int idx1 = 0;
        int idx2 = 0;
        int idxm = 0;

        while(m>idx1 && n>idx2){
            if(nums1[idx1]<=nums2[idx2]){
                arr[idxm]=nums1[idx1];
                idx1++;
            }else{
                arr[idxm]=nums2[idx2];
                idx2++;
            }
            idxm++;
        }
        if(idx1==m){
            for(int i = idxm; i<n+m ; i++){
                arr[i]=nums2[idx2];
                idx2++;
            }
        }else{
            for(int i = idxm; i<n+m ; i++){
                arr[i]=nums1[idx1];
                idx1++;
            }
        }
        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr[i];
        }
        
    }
};