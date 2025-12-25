class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
      int left=nums.size()-1,right=0,sum=0,maxpoint=0;
    while(right<k){
        sum=sum+nums[right];
        right++;
    }
    right--;
    maxpoint=sum;
    while(right>=0){
        sum-=nums[right];
        right--;
        sum=sum+nums[left];
        maxpoint=max(maxpoint,sum);
        left--;
    }
    return maxpoint;
 }
};