class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int totalcost=0;
        int i=0;
        while(i<cost.size()){
                 totalcost+=cost[i];
                 if(i<cost.size()-1){
                    i++;
                    totalcost+=cost[i];
                 }
                 i=i+2;
        }
        return totalcost;
    }
};