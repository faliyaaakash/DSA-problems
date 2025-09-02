class Solution {
public:
    bool binaryserch(vector<int>& friends,int target){
        int left=0,right=friends.size()-1;
        int mid;
        while(left<=right){
            mid=(left+right)/2;
            if(friends[mid]==target){
                return true;
            }else if(friends[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return false;
    }
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        for(int i=0;i<order.size();i++){
            if(binaryserch(friends,order[i])){
               result.push_back(order[i]);
            }
        }
        return result;
    }
};