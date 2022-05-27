class Solution {
public:
    int numberOfSteps(int n) {
        int cnt=0;
        while(n!=0){
            if(n&1)
                n--;
            else
                n=n>>1;
            cnt++;
        }
        return cnt;
    }
};