class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1)return 1;
        int arr[100]={0};
        int i=n;
        while(i>=0){
            for(int j=0;j<i;j++){
                if((i+1)%(j+1)==1){
                    arr[j]++;
                }
            }
            i--;
        }
        int count=0;
        for(int k=0;k<n;k++){
           if(arr[k]>=0){
             count++;
           }
        }
        return count-1;
    }
};