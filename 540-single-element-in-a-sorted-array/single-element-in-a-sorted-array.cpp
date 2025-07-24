class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int mid=0;
        while(left<=right){
              mid=(left+right)/2;
              if((mid-1>=0 && nums[mid-1]!=nums[mid]) && ( mid+1<=nums.size() && nums[mid+1]!=nums[mid]) ){
                    return nums[mid];
              }
              if(right-left<=2){
                if(nums[mid]==nums[right]){
                    return nums[left];
                }else{
                    return nums[right];
                }
              }
              if((mid-1)>=0 && nums[mid]==nums[mid-1]){
                   mid=mid-1;
              }
              if((right-mid+1)%2==0){
                  right=mid-1;
              }else{
                  left=mid+1;
              }
        }
        return nums[mid];
    }
};