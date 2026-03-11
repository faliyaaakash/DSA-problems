class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        string result;
        int p1=a.length()-1,p2=b.length()-1;
        int total=0;
        while(p1>=0 || p2>=0 || c){
           total=c;
            if(p1>=0){
                   total+=(a[p1]-'0');
                   p1--;
            }
            if(p2>=0){
                   total+=(b[p2]-'0');
                   p2--;
            }
            result+=(total%2+'0');
            c=total/2;
        }
        while(result.back()=='0' && result.length()>1){result.pop_back();}
        reverse(result.begin(),result.end());
        return result;
    }
};