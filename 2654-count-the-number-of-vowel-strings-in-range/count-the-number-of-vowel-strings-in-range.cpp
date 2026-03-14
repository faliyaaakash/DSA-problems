class Solution {
public:
bool is_vowel(char c){
    return c=='a'|| c=='e'||c=='i'|| c=='o'||c=='u';
}
 bool is_vowelString(string s){
    int n=s.length()-1;
    return is_vowel(s[0]) && is_vowel(s[n]);
 }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(is_vowelString(words[i])){
                count++;
            }
        }
        return count;
    }
};