#include <iostream>
#include <vector>
using namespace std;

//brute force O(n)
// void alternate(vector<int> &v)
// {
//     for (int i = 0; i < v.size()-1; i++)
//     {
//         if (i % 2 == 0)
//         {
//             if (v[i] >= 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 int j = i + 1;
//                 while (j < v.size() && v[j] < 0)
//                 {
//                     j++;
//                 }
//                 int d = v[j];
//                 v.erase(v.begin() + j);
//                 v.insert(v.begin() + i, d);
//             }
//         }
//         else
//         {

//             if (v[i] < 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 int j = i + 1;
//                 while (j < v.size() && v[j] > 0)
//                 {
//                     j++;
//                 }
//                 int d = v[j];
//                 v.erase(v.begin() + j);
//                 v.insert(v.begin() + i, d);
//             }
//         }
//     }
// }


void alternet(vector<int> &v){
    int posindex=0,negindex=1;
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
             int d = v[i];
                v.erase(v.begin() + i);
                v.insert(v.begin() + posindex, d);
            v.insert(v.begin()+posindex,v[i]);
            posindex+=2;
        }else{
             int d = v[i];
                v.erase(v.begin() + i);
                v.insert(v.begin() + negindex, d);
            v.insert(v.begin()+negindex,v[i]);
            negindex+=2;
        }
    }
}
int main()
{    vector<int> v={};
     for(int i=-100;i<=100;i++){
        v.push_back(i);
     }
     alternet(v);

     cout<<" alternet : ";
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
    return 0;
}