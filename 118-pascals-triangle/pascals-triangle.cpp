class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
    int i=0,j=0;
    while(i<numRows){
        j=0;
        vector<int> temp(i+1,1);
        while(j<=i){
          if(j==0 || j==i){temp[j]=1;}
          else{
             temp[j]=v[i-1][j-1]+v[i-1][j];
          }
          j++;
        }
        v.push_back(temp);
        i++;
    }
    return v;
    }
};