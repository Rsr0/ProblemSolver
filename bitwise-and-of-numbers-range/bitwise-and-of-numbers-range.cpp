class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int count=0;
        while(left && left!=right){  //left>0
            left>>=1;
            right>>=1;
            count++;
        }
        // count gives the number of zero places
        return left<<count;
        }
};