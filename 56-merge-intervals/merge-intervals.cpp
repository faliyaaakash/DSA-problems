class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged_array;
    sort(intervals.begin(),intervals.end());
    int size=intervals.size();
    int i=0;
    while(i<size){
        int start=intervals[i][0];
        int end=intervals[i][1];
        while((i+1)<size && end>=intervals[i+1][0]){
            if(end<intervals[i+1][1]){
               end=intervals[i+1][1];
            }
            i++;
        }
        vector<int> v={start,end};
        merged_array.push_back(v);
        i++;
    }
    return merged_array; 
    }
};