class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long lcm=a*b / __gcd(a,b);
        long l=2, r=1e14, mod=1e9+7;
        while(l<r){
            long mid=(l+r)/2;
            if((mid/a + mid/b - mid/lcm) < n)
                l=mid+1;
            else
                r=mid;
        }
        return l%mod;
    }
};