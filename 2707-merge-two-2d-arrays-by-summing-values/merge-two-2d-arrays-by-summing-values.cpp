class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int idx1=0,idx2=0,i=0;
        vector<vector<int>> v;
       vector<int> temp;
        while(idx1<nums1.size() && idx2<nums2.size()){
            temp.clear();
            if(nums1[idx1][0]==nums2[idx2][0]){
                temp.push_back(nums1[idx1][0]);
                temp.push_back(nums1[idx1][1]+nums2[idx2][1]);
                v.push_back(temp);
                idx1++;
                idx2++;
            }else if(nums1[idx1][0]<nums2[idx2][0]){
                temp.push_back(nums1[idx1][0]);
                temp.push_back(nums1[idx1][1]);
                v.push_back(temp);
                idx1++;
            }else{
                   temp.push_back(nums2[idx2][0]);
                temp.push_back(nums2[idx2][1]);
                v.push_back(temp);
                idx2++;
            }
            i++;
        }
        while(idx1<nums1.size()){
            temp.clear();
              temp.push_back(nums1[idx1][0]);
                temp.push_back(nums1[idx1][1]);
                v.push_back(temp);
                idx1++;
        }
         while(idx2<nums2.size()){
            temp.clear();
               temp.push_back(nums2[idx2][0]);
                temp.push_back(nums2[idx2][1]);
                v.push_back(temp);
                idx2++;
        }
        return v;
    }
};