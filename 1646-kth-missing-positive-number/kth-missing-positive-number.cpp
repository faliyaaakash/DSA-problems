class Solution {
public:
     int binarysearch(vector<int> & v,int target){
        int left=0,right=v.size()-1;
        int mid=0;
        if(target>v[right]){return -1;}
        while(left<=right){
            mid=(left+right)/2;
            if(v[mid]==target){
                return target;
            }
            if(v[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return -1;
     }
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        for(int i=1;i<INT_MAX;i++){
            if(binarysearch(arr,i)==-1){
                    count++;
            }
            if(count==k){
                return i;
            }
        }
        return 0;
    }
};