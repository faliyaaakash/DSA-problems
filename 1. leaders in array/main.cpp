#include <iostream> 
#include<vector>
using namespace std;

vector<int> leaders(vector<int> v){
    vector<int> temp;
    int n=v.size();
    int max=v[n-1];
  temp.emplace_back(max);

  if(n==0 && n<=1){return v;}

  int i=n-2;
    while(i>=0){
         
        if(max<v[i]){
            max=v[i];
            temp.emplace_back(max);
            
        }
       i--;
    }
    // if(temp.size()!=0 && temp[temp.size()-1]!=max) temp.emplace_back(max);
    return temp;
}
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v=leaders({4, 7, 1, 0});
    display(v);
return 0;
}