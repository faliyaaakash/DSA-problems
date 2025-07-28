class Solution {
public:
    int findm(vector<int>& arr){
        int m=0;
        for(int i=0;i<arr.size();i++){
            m=max(arr[i],m);
        }
        return m;
    }

    long long hrs(vector<int>& pile,int k){
        long long  hr=0;
        for(int i=0;i<pile.size();i++){
            hr += (pile[i] + (long long)k - 1) / k;

        }
        return hr;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=findm(piles);
        int low=1;
        int high=mx;
        long long totalhr=0;
        // int ans=1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            totalhr=hrs(piles,mid);

            if(totalhr>h){
                low=mid+1;
            }
            else{
                high=mid-1;
                // ans=min(ans,mid);
            }
        }
        return low;
    }
};