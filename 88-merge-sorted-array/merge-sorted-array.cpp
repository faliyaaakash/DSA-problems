class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size()-1,idx1=m-1,idx2=n-1;
        while(i>=0 && idx2>=0 ){
            
            if(idx1>=0 && nums1[idx1]>=nums2[idx2]){
                nums1[i]=nums1[idx1];
                nums1[idx1]=0;
                idx1--;
            }else{
                nums1[i]=nums2[idx2];
                idx2--;
            }
            i--;
        }
    }
};