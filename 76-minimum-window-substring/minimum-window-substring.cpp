class Solution {
public:
    string minWindow(string s, string t) {
        int startindex = 0;
        int minlength = INT_MAX;
        unordered_map<char, int> tfreq;
        for (int i = 0; i < t.length(); i++) {
            tfreq[t[i]]++;
        }
        int left = 0, right = 0;
        int total = t.length();
        while (right < s.length()) {
            if (tfreq[s[right]] > 0) {
                total--;
            }
            tfreq[s[right]]--;
            right++;
            
                while (total == 0) {
                    if ((right - left) < minlength) {
                        minlength = right - left;
                        startindex = left;
                    }
                    tfreq[s[left]]++;
                    if (tfreq[s[left]] > 0) {
                       total++;
                    }

                    left++;
                }
            
        }
        return (minlength == INT_MAX)?"":s.substr(startindex,minlength);
    }
};