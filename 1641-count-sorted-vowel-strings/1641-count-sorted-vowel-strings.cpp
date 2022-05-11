class Solution {
public:
    
    int solve(int st, int cnt){
        if(cnt==1)
            return 5-st;
        int sum=0;
        for(int i=st;i<5;i++){
            sum+=solve(i, cnt-1);
        }
        return sum;
    }
    
    int countVowelStrings(int n) {
        return solve(0,n);
    }
};