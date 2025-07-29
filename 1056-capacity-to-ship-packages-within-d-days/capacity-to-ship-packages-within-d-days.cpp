class Solution {
public:
    int requierdays(vector<int> v,int weight){
        
        int sum=0,count=0;
        int n=v.size();
        for(int i=0;i<n;i++){
             if(v[i]>weight){return INT_MAX;}
            sum=sum+v[i];
            if(sum>weight){
                count++;
                sum=0;
                sum=sum+v[i];
            }
                
            
        }
        count++;
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
         int sum=0; 
           int left=0;
           int right = accumulate(weights.begin(), weights.end(), 0);
           int mid=0;
           int result=0;
           while(left<=right){
              mid=(left+right)/2;
          
               if(requierdays(weights,mid)<=days){
                result=mid;
                    right=mid-1;
               }else{
                left=mid+1;
               }
           }
           return result;
           
    }
};