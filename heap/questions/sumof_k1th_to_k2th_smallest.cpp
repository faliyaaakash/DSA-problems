#include <iostream> 
#include <vector>
#include<queue>
using namespace std;

int sum(vector<int> &v,int k1,int k2){
    priority_queue<int> pq;
    int big,small;

    if(k1>k2){
        big=k1;
        small=k2;
    }else{
        big=k2;
        small=k1;
    }

    if(big>v.size()){return -1;}
    for(int i=0;i<big;i++){
        pq.push(v[i]);
    }
    for(int i=big;i<v.size();i++){
        if(v[i]<pq.top()){
            pq.pop();
            pq.push(v[i]);
        }
    }
    int sum=0;
    pq.pop();
    for(int i=1;i<big-small;i++){
          sum+=pq.top();
          pq.pop();
    }
    return sum;
}
int main(){
    vector<int> v={1,2,3,4};
    cout<<sum(v,2,3);
return 0;
}
