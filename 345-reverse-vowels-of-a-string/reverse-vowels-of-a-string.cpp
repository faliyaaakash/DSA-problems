class Solution {
public:

    bool is_vowel(char c){
        return c=='a' || c=='A' || c=='E'|| c=='e'|| c=='I'||c=='i'||c=='O'||c=='o'||c=='u'||c=='U';
    }
    string reverseVowels(string s) {
        string str=s;
        int i=0,j=s.length()-1;
        while(i<j){
            while(i<j && !is_vowel(str[i])){
                i++;
            }
            while(i<j && !is_vowel(str[j])){
                j--;
            }
            swap(str[i],str[j]);
            i++;j--;
        }
        return str;
    }
};