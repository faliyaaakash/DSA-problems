class Solution {
public:
    int numberOfSubstrings(string str) {
        int left=0,right=0,count=0;
   int len=str.length();
   unordered_map<char,int> map;
   while(right<str.length()){
       map[str[right]]++;
       while(map.size()>=3){
         count=count+len-right;
         map[str[left]]--;
         if(map[str[left]]==0){
            map.erase(str[left]);
         }
         left++;
       }
           right++;
       
   }
   return count;
    }
};