class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        sort(items1.begin(),items1.end());
          sort(items2.begin(),items2.end());
            int idx1=0,idx2=0,i=0;
        vector<vector<int>> v;
       vector<int> temp;
        while(idx1<items1.size() && idx2<items2.size()){
            temp.clear();
            if(items1[idx1][0]==items2[idx2][0]){
                temp.push_back(items1[idx1][0]);
                temp.push_back(items1[idx1][1]+items2[idx2][1]);
                v.push_back(temp);
                idx1++;
                idx2++;
                i++;
            }else if(items1[idx1][0]<items2[idx2][0]){
                temp.push_back(items1[idx1][0]);
                temp.push_back(items1[idx1][1]);
                v.push_back(temp);
                idx1++;
            }else{
                   temp.push_back(items2[idx2][0]);
                temp.push_back(items2[idx2][1]);
                v.push_back(temp);
                idx2++;
            }
            i++;
        }
        while(idx1<items1.size()){
            temp.clear();
              temp.push_back(items1[idx1][0]);
                temp.push_back(items1[idx1][1]);
                v.push_back(temp);
                idx1++;
        }
         while(idx2<items2.size()){
            temp.clear();
               temp.push_back(items2[idx2][0]);
                temp.push_back(items2[idx2][1]);
                v.push_back(temp);
                idx2++;
        }
       
        return v;
    }
};