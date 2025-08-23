
//2558 leetcode

#include <iostream> 
#include<vector>
#include<queue>
#include<math.h>
using namespace std;

 long long pickgifts(vector<int> & gifts,int k){
     priority_queue<long long> pq(gifts.begin(),gifts.end());
    long long total=0;
     for(int i=0;i<gifts.size();i++){
        total+=gifts[i];
     }
     int s=0;
     while(s<k ){
        long long top=pq.top();
        long long remain=(long long)sqrt(top);
        long long taken=top-remain;
        total-=taken;
        pq.pop();
        pq.push(remain);
        s++;
     }
     return total;
}
int main(){
    vector<int> v={1,1,1,1,1,1,1};
    cout<<pickgifts(v,4);
return 0;
}