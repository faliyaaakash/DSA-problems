#include <iostream>
#include <vector>
using namespace std;
bool check_minheap(vector<int> &arr)
{
    int n = arr.size();
    for (int i = (n - 1) / 2; i >= 0; i--)
    {
        if (2 * i + 1 < n)
        {
            if (arr[i] <=arr[2 * i + 1])
            {
                if (2 * i + 1)
                {
                    if (arr[i] <= arr[2 * i + 2])
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
            }else{
                return false;
            }
        }
        
    }
    return true;
}
int main()
{   
    vector<int> v={2,2,23,3,13,54,23,5};
    if(check_minheap(v)){
        cout<<"this is min heap !";
    }
    else{
        cout<<" it is not a heap !";
    }
    return 0;
}