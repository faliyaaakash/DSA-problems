#include <iostream> 
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
long long findheight(vector<int> &v){
    long long n=v.size();
    long long count=0;
    if(n==0){return -1;}
    long long i=n-1;
    long long parent;
    while(i!=0){
        parent=(i-1)/2;
        i=parent;
        count++;
    }
    return count;
}

int main(){
    vector<int> v={1,3,6,5,9,8,9,10};
    cout<<findheight(v)<<" (number of edges in longest path)";
return 0;
}