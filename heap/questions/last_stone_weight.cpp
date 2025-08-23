#include <iostream> 
#include<vector>
#include<queue>
using namespace std;

int laststoneweight(vector<int> &v){
    if(v.size()==0){return -1;}
    priority_queue<int> pq(v.begin(),v.end());
    
    while(pq.size()>1){
         int s1=pq.top();
         pq.pop();
         int s2=pq.top();
         pq.pop();
         if(s1<s2){
            pq.push(s2-s1);
         }else if(s2>s1){
            pq.push(s2-s1);
         }
    }
    if(pq.size()==0){return 0;}
    return pq.top();
}
int main(){
    vector<int> v={1,1};
    cout<<laststoneweight(v);
return 0;
}