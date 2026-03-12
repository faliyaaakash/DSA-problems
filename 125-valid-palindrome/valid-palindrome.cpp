class Solution {
public:
    bool isPalindrome(string s) {
        int p1=0,p2=s.length()-1;
        while(p1<=p2){
            while(p1 < p2 && !isalnum(static_cast<unsigned char>(s[p1]))){
                p1++;
            }
            while(p1 < p2 && !isalnum(static_cast<unsigned char>(s[p2]))){
                p2--;
            }
            if(p1<=p2 && (char)tolower(s[p1])==(char)tolower(s[p2])){
                p1++;
                p2--;
            }else{
                return false;
            }
        }
        return true;
    }
};