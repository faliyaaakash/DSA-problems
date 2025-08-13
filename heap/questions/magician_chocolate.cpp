#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void heapifyDown(vector<int> &arr, int idx)
{
    int size = arr.size();
    int max = idx;

    if (idx * 2 + 1 < size)
    {
        if (arr[max] < arr[idx * 2 + 1])
        {
            max = idx * 2 + 1;
        }
    }

    if (idx * 2 + 2 < size)
    {
        if (arr[max] < arr[idx * 2 + 2])
        {
            max = idx * 2 + 2;
        }
    }
    if (max != idx)
    {
        swap(arr[max], arr[idx]);
    }
    else
    {
        return;
    }
    heapifyDown(arr, max);
}

void heapifyUp(vector<int> &arr, int i)
{
    if (i == 0)
    {
        return;
    }
    int parent = (i - 1) / 2;
    if (arr[parent] < arr[i])
    {
        swap(arr[parent], arr[i]);
        i = parent;
        heapifyUp(arr, i);
    }
    else
    {
        return;
    }
}

void insert(vector<int> &arr, int a)
{
    arr.push_back(a);
    int n = arr.size();

    heapifyUp(arr, n - 1);
}

int max_choco(vector<int> &arr,int t){
    int n=arr.size();
    for(int i=(n-1)/2;i>=0;i--){
        heapifyDown(arr,i);
    }
    int sum=0;
    for(int i=0;i<t;i++){
        int k=arr[0];
        swap(arr[0],arr[arr.size()-1]);
        arr.pop_back();
        heapifyDown(arr,0);
        insert(arr,k/2);
        sum+=k;
    }
    return sum;
}

int main()
{
    vector<int> v={2,4,8,6,10};
    cout<<max_choco(v,4);
    return 0;
}