class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> sumArray;
         sort(nums.begin(),nums.end());
         int n=nums.size();
         int left=1,right=n-1;
         for(int i=0;i<n-2;i++){

            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            left=i+1;
            right=n-1;
            while(left<right){
                if((nums[left]+nums[right])<(-nums[i])){
                    left++;
                }else if((nums[left]+nums[right])>(-nums[i])){
                    right--;
                }else{
                    sumArray.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;

                    while(left < right && nums[right]==nums[right+1]){
                        right--;
                    }
                    while(left < right && nums[left]==nums[left-1]){
                        left++;
                    }
                }
            }
         }
         return sumArray;
    }
};