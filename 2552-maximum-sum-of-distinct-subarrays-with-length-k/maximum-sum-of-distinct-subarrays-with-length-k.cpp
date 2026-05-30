class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0,maxsum=0;
        unordered_map<int,int> freq;
        int left=0,right=0;
        while(right<k){
            sum+=nums[right];
            freq[nums[right]]++;
            right++;
        }
        right--;
        while(right<nums.size()){
            if(freq.size()==k){
                maxsum=max(sum,maxsum);
            }
            sum-=nums[left];
            freq[nums[left]]--;
            if(freq[nums[left]]<=0){freq.erase(nums[left]);}
            left++;
            right++;
            if(right<nums.size()){
                sum+=nums[right];
                freq[nums[right]]++;
            }
        }
        return maxsum;
    }
};