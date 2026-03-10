class Solution {
public:
    string largestOddNumber(string num) {
        string substr;
        int i=num.length()-1;
        int idx;
        for(i;i>=0;i--){
            if((num[i]-'0')%2==1){
                idx=i;
                break;
            }    
        }
         i=0;
        while(i<=idx && num[i]=='0'){
            i++;
        }
        substr=num.substr(i,idx-i+1);
        return substr;
    }
};