class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int len=haystack.length();
        int len2=needle.length();
        while(i<len){
            if(haystack[i]==needle[j]){
                int start=i;
                while(i<len && j<len2 && haystack[i]==needle[j]){
                    i++; 
                    j++;
                }
                if(haystack.substr(start,i-start)==needle){
                    return start;
                }else{
                    j=0;
                    i=++start;
                }
            }else{
                i++;
            }
        }
        return -1;
    }
};