class Solution {
public:
    int atmostcount(vector<int> & nums,int k){
        int left=0,right=0,count=0;
        int odd=0;
        while(right<nums.size()){
              if(nums[right]%2!=0){
                odd++;
              }
              while(odd>k && left<nums.size()){
                if(nums[left]%2!=0){
                    odd--;
                }
                left++;
              }
              count+=right-left+1;
              right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmostcount(nums,k)-atmostcount(nums,k-1);
    }
};