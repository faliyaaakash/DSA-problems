#include <string>
class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v(numRows,"");
        int sindex=0;
        if (numRows == 1 || s.length() <= numRows) return s;
        for(int i=0;i<numRows;i++){
            v[i]+=s[sindex];
            sindex++;
            if(sindex>=s.length()){
                break;
            }
            if(i==numRows-1){
                for(int j=numRows-2;j>=0;j--){
                     v[j]+=s[sindex];
                     sindex++;
                     if(sindex>=s.length()){
                        break;
                     }
                }
                i=0;
                if(sindex>=s.length()){
                        break;
                }    
            }
        }
        string newstr="";
        for(int i=0;i<numRows;i++){
            newstr+=v[i];
        }
       return newstr;
    }
};