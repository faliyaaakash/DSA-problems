class Solution {
public:
   bool bloomday(vector<int> & v,int day,int m,int k){
        int count=0,no=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=day){
                count++;
            }else{
                no+=(count/k);
                count=0;
            }
        }
        no+=(count/k);
        if(no>=m){
            return true;
        }
        return false;
   }
    int minDays(vector<int>& v, int m, int k) {
       
        long long total=(long long)m*k;
        if(v.size()<total){
            return -1;
        }
       int left=*min_element(v.begin(),v.end());
       int right=*max_element(v.begin(),v.end());
       int mid=0,ans=right;
       while(left<=right){
        mid=(left+right)/2;
        if(bloomday(v,mid,m,k)){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
       }
       return ans;
    }
};