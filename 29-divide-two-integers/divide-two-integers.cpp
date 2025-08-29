class Solution {
public:
    int divide(int dividend, int divisor) {
         // Handle overflow
    if(dividend == INT_MIN && divisor == -1)
		return INT_MAX;
  
    // The sign will be negative only if sign of 
    // divisor and dividend are different
    bool sign ;
    if((dividend < 0) ^ (divisor < 0)) {
        sign= true;
     }else{
        sign=false;
     } 
       
       long long a = (long long) dividend;
        long long b = (long long) divisor;

        
       if(a<0){a=-a;}
    if(b<0){b=-b;}   
   

    // Initialize the quotient
    long long result= 0;

    // Iterate from most significant bit to 
    // least significant bit
    for (int i = 31; i >= 0; --i) {

        // Check if (divisor << i) <= dividend
        if ((b << i) <= a) {
            a -= (b << i);               // a - (b * 2^i)
            result = result | (1<< i);  // result + 2^i
        }
    }
           //fix the result between [-2^31,2^31-1]
        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;
    
        if(sign){
            return -result;
        }else{
            return result;
        }
    }
};