#include <iostream> 
#include<math.h>
using namespace std;
int nthroot(int m,int n){
  int left=1,right=m;
  int mid=0;
  if(n<0){
    return -1;
  }
  if(m==0){
    return 0;
  }
  if(m==1){
    return 1;
  }
  while (left<=right)
  {   mid=(left+right)/2;
     if((float)pow(mid,n)-m==0){
        return mid;
     }
     if((float)pow(mid,n)-m>0){
        right=mid-1;
     }else if((float)pow(mid,n)-m<0){
        left=mid+1;
     }
  }
  return -1;
}
int main(){
  
    cout<<nthroot(65,3);
return 0;
}