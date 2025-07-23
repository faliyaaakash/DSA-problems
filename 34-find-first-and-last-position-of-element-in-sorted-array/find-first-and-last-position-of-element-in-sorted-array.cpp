class Solution {
public:
     
      int firstoccurs(vector<int> &nums,int target){
    int left=0,right=nums.size()-1;
    int mid=0;
    while(left<=right){
        mid=(left+right)/2;
        if(nums[mid]==target){
            if(mid-1>=0 && nums[mid]!=nums[mid-1]){
                return mid;
            }
            if(mid==0 && nums[mid]==target){
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
             if(mid==nums.size()-1 && nums[mid]==target){
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



    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> t;
     t.push_back(firstoccurs(nums,target));
     t.push_back(lastoccurs(nums,target));
     return t;
    }
};