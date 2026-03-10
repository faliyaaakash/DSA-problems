class Solution {
 public:
     
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        int n=strs.size()-1;
        sort(strs.begin(),strs.end());
        int len=min(strs[0].length(),strs[n].length());
        string s1=strs[0],s2=strs[n];
        for(int i=0;i<len;i++){
            if(s1[i]!=s2[i]){
                break;
            }
            prefix+=s1[i];
        }
        return prefix;
    }
};