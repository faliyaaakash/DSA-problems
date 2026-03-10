class Solution {
public:
    string removeOuterParentheses(string s) {
       int level=0;
       string newstr;
         for(char ch:s){
            if(ch=='('){
               if(level>0){newstr+=ch;}
                level++;
            }else{
                level--;
                if(level>0){newstr+=ch;}
            }
         }
         return newstr;
    }
};