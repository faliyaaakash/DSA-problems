class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0){return -1;}
        int left=0,right=nums.size()-1;
        int mid=0;
        int min=nums[0];
        while(left<=right){
            mid=(left+right)/2;
            if(min>nums[mid]){
                min=nums[mid];
            }
            if(nums[mid]>nums[right]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return min;
    }
};