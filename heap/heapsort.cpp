#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapifyDown(vector<int> &arr, int n, int i)
{
    int max = i;

    if (i * 2 + 1 < n)
    {
        if (arr[max] < arr[i * 2 + 1])
        {
            max = i * 2 + 1;
        }
    }

    if (i * 2 + 2 < n)
    {
        if (arr[max] < arr[i * 2 + 2])
        {
            max = i * 2 + 2;
        }
    }
    if(max!=i){
        swap(arr[i],arr[max]);
        heapifyDown(arr,n,max);
    }
}


void heapSort(vector<int> &arr)
{
     
    int n = arr.size();
      int idx=(n-1)/2;
     for(int i=idx;i>=0;i--){
        heapifyDown(arr,n,i);
     }

    for (int i = n-1; i>=0; i--)
    {
        swap(arr[0],arr[i]);
        heapifyDown(arr,i,0);
    }
}

int main()
{   vector<int> v={4,7,45,9,12,1,0,545,8};
    heapSort(v);
     cout<<"\n";
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<"\n";

    return 0;
}