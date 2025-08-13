#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void heapify(vector<int> &arr, int idx)
{
   int size = arr.size();
   int min = idx;

   if (idx * 2 + 1 < size)
   {
      if (arr[min] >= arr[idx * 2 + 1])
      {
         min = idx * 2 + 1;
      }
   }

   if (idx * 2 + 2 < size)
   {
      if (arr[min] >= arr[idx * 2 + 2])
      {
         min = idx * 2 + 2;
      }
   }
   if (min != idx)
   {
      swap(arr[min], arr[idx]);
   }
   else
   {
      return;
   }
   heapify(arr, min);
}

void heapifyUp(vector<int> &arr, int i)
{
   if (i == 0)
   {
      return;
   }
   int parent = (i - 1) / 2;
   if (arr[parent] > arr[i])
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
void insert(vector<int> &min_heap, int a)
{
   min_heap.push_back(a);
   int n = min_heap.size();

   heapifyUp(min_heap, n - 1);
}
int min_cost(vector<int> &arr)
{
   int n = arr.size();
   int i = (n - 1) / 2;

   for (int i = arr.size() / 2 - 1; i >= 0; i--)
   {
      heapify(arr, i);
   }

   int a, b, cost = 0;
   int temp = 0;
   while (arr.size() > 1)
   {

      a = arr[0];
      swap(arr[0], arr[arr.size() - 1]);
      arr.pop_back();
      heapify(arr, 0);
      b = arr[0];
      swap(arr[0], arr[arr.size() - 1]);
      arr.pop_back();
      heapify(arr, 0);
      temp = a + b;

      a = 0, b = 0;
      insert(arr, temp);
      cost = cost + temp;
   }
   return cost;
}

int main()
{
   vector<int> arr = {4, 2, 7, 6, 9};
   cout << min_cost(arr);

   return 0;
}