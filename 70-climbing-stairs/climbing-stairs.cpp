class Solution {
public:
    int climbStairs(int n) {
       int temp=0;
       int a=1,b=1;
       if(n==1 || n==0 ){return 1;}
        for(int i=2;i<=n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        return temp;
    }
};