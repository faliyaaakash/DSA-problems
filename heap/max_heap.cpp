#include <iostream> 
#include<algorithm>
#include<vector>
using namespace std;

class Max_heap{
      vector<int> max_heap;
      public :
        Max_heap(){
            max_heap={};
        }

        void heapifyDown(vector<int> &arr,int idx){
            int size=max_heap.size();
            int max=idx;
            
            if(idx*2+1<size){
                 if(arr[max]<arr[idx*2+1]){
                    max=idx*2+1;
                 }
            }
         
            if(idx*2+2<size){
                 if(arr[max]<arr[idx*2+2]){
                    max=idx*2+2;
                 }
            }
            if(max!=idx){
                   swap(arr[max],arr[idx]);
            }else{
                return ;
            }
            heapifyDown(arr,max);
        }

          void heapifyUp(vector<int> &arr,int i){
             if(i==0){return ;}
             int parent=(i-1)/2;
             if(arr[parent]<arr[i]){
                 swap(arr[parent],arr[i]);
                 i=parent;
                 heapifyUp(arr,i);
             }else{
                return;
             }
          }
        void insert(int a){
           max_heap.push_back(a);
           int n=max_heap.size();

           heapifyUp(max_heap,n-1);
        } 
        
      void display(){
            int n=max_heap.size();
            cout<<"\n";
            for(int i=0;i<n;i++){
                cout<<max_heap[i]<<" ";
            }
        }
     void delete_root(){
        int n=max_heap.size();
          swap(max_heap[0],max_heap[n-1]);
          max_heap.pop_back();
          heapifyDown(max_heap,0);
     }
    
};
int main(){
    Max_heap h1;
    h1.insert(2);
    h1.insert(6);
    h1.insert(7);
    h1.insert(1);
    h1.insert(3);
    h1.insert(4);
    h1.insert(9);
    h1.insert(10);
    
    h1.display();
    cout<<"\nafter delete root :";
    h1.delete_root();
    h1.display();
return 0;
}