class Solution {
public:
    string largestEven(string s) {
        int i=s.length()-1;
        while(i>=0 && s[i]=='1'){
         i--;
        }
        return s.substr(0,i+1);
    }
};