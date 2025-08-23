#include <iostream>
#include<vector> 
#include<set>
#include<queue>
#include<algorithm>
using namespace std;
int kthsmallest(vector<int> &v,int k){
    if(k>=v.size()){
        cout<<"it is not possible!  ";
        return -1;
    }

    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(v[i]);
    }
    for(int i=k;i<v.size();i++){
        if(v[i]<pq.top()){
            pq.pop();
            pq.push(v[i]);
        }
    }
    return pq.top();
}
int main(){
    vector<int> v={10,23};
    cout<<kthsmallest(v,3);
return 0;
}