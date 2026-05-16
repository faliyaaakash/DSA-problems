class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0,right=0;
       int n=s.length();
       map<char,int> m;
       if(n<2){return n;}
       int maxLength=0;
      
       while(right<n){
       
         while(m[s[right]]>0 && left<right){
            m[s[left]]--;
             left++;
         }
         m[s[right]]++;
         right++;
          if((right-left)>maxLength){
            maxLength=right-left;
         }
       }
    
       return maxLength;
    }
};