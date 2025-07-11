#include <iostream> 
#include<vector>
using namespace std;

vector<int> leaders(vector<int> v){
    vector<int> temp;
    int i=v.size()-1;
    int max=v[i];
  
    while(i>=0){
        if(max<v[i]){
            temp.emplace_back(max);
            max=v[i];
        }
        i--;
    }
    if(temp.size()!=0 && temp[temp.size()-1]!=max) temp.emplace_back(max);
    return temp;
}
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v=leaders({4,1,0,2,3});
    display(v);
return 0;
}