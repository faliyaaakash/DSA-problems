#include<string>
class Solution {
public:
    int reverse(int x) {
        long n=0;
        
        while(x!=0){
            if(n<-2147483648/10 || n>2147483648/10){
            return 0;
            }
            n=n*10+(x%10);
            x=x/10;
        }
      
            return (int)n;
    }
};