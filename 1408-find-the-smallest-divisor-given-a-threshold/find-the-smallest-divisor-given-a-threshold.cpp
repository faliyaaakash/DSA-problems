class Solution {
public:
    bool sum(vector<int>& v, int n, int limit) {
        long long sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum = sum + ceil((double)v[i] / n);
        }
        if (sum <= limit) {
            return true;
        }
        return false;
    }
    int smallestDivisor(vector<int>& nums, int limit) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int mid = 0;
        int ans = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (sum(nums, mid, limit)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};