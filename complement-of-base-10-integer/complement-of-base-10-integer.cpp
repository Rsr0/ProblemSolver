class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int count=log2(n) +1;
        int ones=pow(2,count)-1;
        return n^ones;
    }
};