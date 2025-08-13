#include <iostream> 
#include<algorithm>
#include<vector>
using namespace std;

class Min_heap{
      vector<int> min_heap;
      public :
        Min_heap(){
            min_heap={};
        }

        void heapify(vector<int> &arr,int idx){
            int size=min_heap.size();
            int min=idx;
            
            if(idx*2+1<size){
                 if(arr[min]>arr[idx*2+1]){
                    min=idx*2+1;
                 }
            }
         
            if(idx*2+2<size){
                 if(arr[min]>arr[idx*2+2]){
                    min=idx*2+2;
                 }
            }
            if(min!=idx){
                   swap(arr[min],arr[idx]);
            }else{
                return ;
            }
            heapify(arr,min);
        }

          
        void insert(int a){
           min_heap.push_back(a);
           int n=min_heap.size();
           int index=(n-1)/2;
           for(int i=index;i>=0;i--){
             heapify(min_heap,i);
           }
        } 
        
      void display(){
            int n=min_heap.size();
            cout<<"\n";
            for(int i=0;i<n;i++){
                cout<<min_heap[i]<<" ";
            }
        }
     int delete_root(){
       if (min_heap.empty()) {
            throw runtime_error("Heap is empty");
        }
        int root = min_heap[0];
        min_heap[0] = min_heap.back();
        min_heap.pop_back();
        if (!min_heap.empty()) {
            heapify(min_heap, 0);
        }
        return root;
     }

};
int main(){
    Min_heap h1;
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
    h1.delete_root();
    h1.delete_root();
     h1.delete_root();
      h1.delete_root();
       h1.delete_root();
        h1.delete_root();
    
    h1.display();
return 0;
}