 #include <iostream> 
 #include <vector>
 using namespace std;

 int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        for(int i=0;i<prices.size();i++){
            if(min<prices[i]){
                 
                  if(prices[i]-min>max){
                    max=prices[i]-min;
                  }
                
            }else{
                min=prices[i];
            }
        }
        return max;
    }

 int main(){
    vector<int> vec={7,1,5,3,6,4};
    cout<<"max profit : "<<maxProfit(vec);
 return 0;
 }
 