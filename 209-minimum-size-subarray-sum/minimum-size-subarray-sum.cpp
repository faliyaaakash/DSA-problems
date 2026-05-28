class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int minlength=INT_MAX;
        int sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            if(sum>=target){
               if((sum-nums[left])>target){
                 while((sum-nums[left])>=target){
                  sum-=nums[left];
                  left++;
                }
               }
                 minlength=min(minlength,right-left+1);
            }
            right++;
        }
        return (sum>=target)?minlength:0;
    }
};