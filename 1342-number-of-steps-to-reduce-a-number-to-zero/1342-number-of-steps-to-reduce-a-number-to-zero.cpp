class Solution {
public:
    int numberOfSteps(int n) {
        int cnt=0;
        while(n!=0){
            if(n%2)
                n--;
            else
                n/=2;
            cnt++;
        }
        return cnt;
    }
};