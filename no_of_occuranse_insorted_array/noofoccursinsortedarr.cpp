#include <iostream> 
#include<vector>
using namespace std;

int firstoccurs(vector<int> &nums,int target){
    int left=0,right=nums.size()-1;
    int mid=0;
    while(left<=right){
        mid=(left+right)/2;
        if(nums[mid]==target){
            if(mid-1>=0 && nums[mid]!=nums[mid-1]){
                return mid;
            }
            right=mid-1;
        }else if(nums[mid]>target){
           right=mid-1;
        }else if(nums[mid]<target){
            left=mid+1;
        }
    }
      return -1;
}

int lastoccurs(vector<int> &nums,int target){
    int left=0,right=nums.size()-1;
    int mid=0;
    while(left<=right){
        mid=(left+right)/2;
        if(nums[mid]==target){
            if(mid+1<nums.size() && nums[mid]!=nums[mid+1]){
                return mid;
            }
            left=mid+1;
        }else if(nums[mid]>target){
           right=mid-1;
        }else if(nums[mid]<target){
            left=mid+1;
        }
    }
      return -1;
}

int lowanndup(vector<int> & nums,int target){
     vector<int> t;
     t.push_back(firstoccurs(nums,target));
     t.push_back(lastoccurs(nums,target));
     return t[1]-t[0];
}
int main(){
    vector<int> v={};
    int target=60;
    int output=lowanndup(v,target);
    cout<<output;
return 0;
}