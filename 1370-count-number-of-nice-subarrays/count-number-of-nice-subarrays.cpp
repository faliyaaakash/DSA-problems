class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> oddcounts;
        int  n=nums.size();
        int oddcount=0,count=0;
      oddcounts[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                oddcount++;
            }
            oddcounts[oddcount]++;
            if(oddcounts.find(oddcount-k)!=oddcounts.end()){
                count+=oddcounts[oddcount-k];
            }
        }
        return count;
    }
};