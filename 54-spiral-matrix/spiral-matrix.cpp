class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int minrow=0,mincol=0,maxcol=matrix[0].size()-1,maxrow=matrix.size()-1;
        int i=0,j=0;
        if(mincol==maxcol && minrow==maxrow){
            return {{matrix[0][0]}};
        }
        while(mincol<=maxcol && minrow<=maxrow){
            if(i==minrow && j<maxcol){
                while(i==minrow && j<=maxcol){
                  v.push_back(matrix[i][j]);
                  j++;
                }
                j--; // step back after overstepping
                i++;
                minrow++;
            }else if(j==maxcol && i<maxrow){
                while (j==maxcol && i<=maxrow)
                {
                   v.push_back(matrix[i][j]);
                   i++;
                }
                i--;
                j--;
                maxcol--;
            }else if(i==maxrow && j>mincol){
                while (i==maxrow && j>=mincol)
                {
                    v.push_back(matrix[i][j]);
                j--;
                }
                j++;
                 i--;
                maxrow--;
            }else if(j==mincol && i>minrow){
               while (j==mincol && i>=minrow)
               {
                v.push_back(matrix[i][j]);
                i--;
               }
               i++;
               j++;
               mincol++;
            }
        }
        return v;
    }
};