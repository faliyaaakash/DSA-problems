class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int number;
        int n=nums.size();
        int target=nums.size()/3;
         int count = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > target) {
                    v.push_back(nums[i - 1]);
                }
                count = 1; // reset count for the new number
            }
        }

        // Check the last element group
        if (count > target) {
            v.push_back(nums[n - 1]);
        }

        return v;
    return v;
    }
};