#include <iostream> 
using namespace std;
int sqt(int a){
   int left=1,right=a;
   int mid=0;
   while(left<=right){
    mid=(left+right)/2;
    if((mid*mid)==a){
        return mid;
    }
    
    if((mid*mid)<a && (mid+1)*(mid+1)>a){
        return mid;
    }else if(mid*mid>a){
        right=right-1;
    }else {
       left=mid+1;
    }
   }
}
int main(){
    cout<<sqt(8);
return 0;
}