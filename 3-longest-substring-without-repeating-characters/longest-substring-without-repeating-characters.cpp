class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int count=0,max=0;
        int left=0,right=0;
        while(right<s.length()){
            
               
            if(m.count(s[right]) && m[s[right]]>=left){
               
                left=m[s[right]]+1;
               
            }
            
                count=right-left+1;
                m[s[right]]=right;
                   
                if(max<count){max=count;}
                right++;
        }
        return max;
    }
};