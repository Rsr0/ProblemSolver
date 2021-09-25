class Solution {
public:
    int tribonacci(int n) {
        if(n<2) return n;
        int a=0,b=1,c=1;
        int d;
        int i=3;
        while(i++ <= n){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return c;
    }
};