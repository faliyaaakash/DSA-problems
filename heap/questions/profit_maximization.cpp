#include <iostream> 
#include<vector>
#include<queue>
using namespace std;

int maxprofit(vector<int> &v,int seats){
    priority_queue<int> pq(v.begin(),v.end());
    int i=0;
    int total=0;
    while(i<seats){
        total+=pq.top();
        int temp=pq.top();
        pq.pop();
        pq.push(--temp);
        i++;
    }
    return total;
}
int main(){
    vector<int> v={6,4,2,3};
    cout<<maxprofit(v,5);
return 0;
}