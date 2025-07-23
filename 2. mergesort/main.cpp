#include <iostream> 
#include<vector>
using namespace std;

//first merge function

void merge(vector<int> &v,int left,int mid,int right){
    int low=left;
    int high=mid+1;
    while(low<=mid && high<=right){
        if(v[high]<v[low]){
            int temp=v[high];
            v.erase(v.begin()+high);
            v.insert(v.begin()+low,temp);
            mid++;
            high++;
            low++;
        }else if(v[high]>v[low]){
            low++;
            
        }else{
               low++;
                high++;
        }
       
    }
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void mergesort(vector<int> &v,int left,int right){
    int mid=(left+right)/2;
    if(left==right)return;
   mergesort(v,left,mid);
   mergesort(v,mid+1,right);
   merge(v,left,mid,right);
}
int main(){
    vector<int> v={{3, 3, 1,1,2, 3, 3}};
    mergesort(v,0,6);
    display(v);

return 0;
}