class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
       int i=0;
       int idx=0;
       while(i<nums.size()){
         if(count[idx]>0){
            nums[i]=idx;
            count[idx]--;
             i++;
         }
         if(count[idx]<=0){
            idx++;
         }
        
       }
    }
};