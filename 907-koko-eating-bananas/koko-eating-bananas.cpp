class Solution {
public:
    long long calculatetotalhours(vector<int>& v, int h) {
        long long sum = 0;
        for (int i = 0; i < v.size(); i++) {
            double temp=(double)v[i] / h;
            sum = sum + ceil(temp);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& v, int h) {
         int left = 1; 
        int right = *max_element(v.begin(), v.end());
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long totalHours = calculatetotalhours(v, mid);

            if (totalHours <= h) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return result;
    }
};