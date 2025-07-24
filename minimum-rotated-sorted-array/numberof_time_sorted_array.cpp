#include <iostream> 
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
        if(nums.size()==0){return -1;}
        int left=0,right=nums.size()-1;
        int mid=0;
        int min=nums[0];
        int inx=0;
        //find index of minimum number
        while(left<=right){
            mid=(left+right)/2;
            if(min>nums[mid]){
                min=nums[mid];
                inx=mid;
            }
            if(nums[mid]>nums[right]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        
        //check it;
        return inx;
    }

int main(){
    vector<int> v={4,5,6,7,0,1,2,3};
    cout<<findMin(v);
return 0;
}