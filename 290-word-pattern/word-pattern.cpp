class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> m1; // word -> char
        unordered_map<char, string> m2; // char -> word
        
        int n = s.length();
        int m = pattern.length();
        int i = 0, j = 0;
        
        while (i < n && j < m) {
            // 1. Extract the next word
            while (i < n && s[i] == ' ') i++; // Skip leading spaces
            int start = i;
            while (i < n && s[i] != ' ') i++;
            string word = s.substr(start, i - start);

            // 2. Check and establish Bijective Mapping
            // Check char to word
            if (m2.count(pattern[j]) && m2[pattern[j]] != word) return false;
            // Check word to char
            if (m1.count(word) && m1[word] != pattern[j]) return false;

            // 3. Create the mapping if it's new
            m2[pattern[j]] = word;
            m1[word] = pattern[j];

            j++; // Move to next character in pattern
        }

        // Return true only if both pattern and string are fully processed
        return i >= n && j == m;
    }
};
