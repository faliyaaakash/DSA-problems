class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         map<int,int> col,row;

            for(int i=0;i<matrix.size();i++){
               for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    col[j]++;
                    row[i]++;
                }
               }
            }

            for(int i=0;i<matrix.size();i++){
               for(int j=0;j<matrix[i].size();j++){
                if(col[j] || row[i]){
                    matrix[i][j]=0;
                }
               }
            }
    }
};