#include <stack>
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int i = 0;
        string word = "";

        while (i < s.length()) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    st.push(word);
                  
                }
                  word = "";
            }
            i++;
        }

        // Push last word if it's not empty
        if (!word.empty()) {
            st.push(word);
        }

        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
            if (!st.empty()) {
                result += " ";
            }
        }

        return result;
    }
};
