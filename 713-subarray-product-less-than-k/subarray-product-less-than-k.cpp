class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int mul=1;
         int count=0;
        for(int i=0;i<nums.size();i++){
            mul=nums[i];
            if(nums[i]<k)count++;
            for(int j=i+1;j<nums.size();j++){
                mul*=nums[j];
                if(mul<k){
                    count++;
                }else{
                    break;
                }
            }
        }
        return count;
    }
};