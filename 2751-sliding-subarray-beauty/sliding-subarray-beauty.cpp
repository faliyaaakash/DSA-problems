class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int left=0,right=0;
        vector<int> result;
        int countNegative=0;
        vector<int> freq(50,0);
        for(right=0;right<k;right++){
            if(nums[right]<0){
                countNegative++;
                freq[nums[right]+50]++;
            }
        }
        right--;
        while(right<nums.size()){
            if(countNegative<x){
                result.push_back(0);
            }else{
                int count=0;
                for(int i=0;i<50;i++){
                    count+=freq[i];
                    if(count>=x){
                        result.push_back(i-50);
                        break;
                    }
                }
            }
            if(nums[left]<0){
                freq[nums[left]+50]--;
                countNegative--;
            }
            left++;
            right++;
            if(right<nums.size()){
                if(nums[right]<0){
                     freq[nums[right]+50]++;
                countNegative++;
                }
            }
        }
        return result;
    }
};