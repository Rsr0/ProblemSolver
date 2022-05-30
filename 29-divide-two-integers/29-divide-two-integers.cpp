class Solution {
public:
    int divide(int dividend, int divisor) {
     //corner cases
        if(dividend==0) return 0;
        if(divisor==0) return INT_MAX;
        if(divisor==1) return dividend;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        
    
        int sign = (dividend<0) ^ (divisor<0) ? -1 : 1 ;
        long long a=dividend, b=divisor;
        a=labs(a); // abs for long
        b=labs(b);
        long long res=0; 
   
        while(a>=b){
            long temp=b, i=1;
            while(temp<<1 <=a){  
                temp<<=1;
                i<<=1;              //2^i

            }
            a-=temp;
            res+=i;
        }
        
        // if(sign==-1) res=-res;
        
        return res*sign;
    }
};