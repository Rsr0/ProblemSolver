class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 || n==1) return n;
        
        int num[n+1];
        num[0]=0, num[1]=1;
        int ans=1;
        
        for(int i=2;i<=n;i++){
            num[i]= (i%2==0)? num[i/2] : num[i/2]+num[i/2+1];
            ans=max(ans, num[i]);
        }
        
        return ans;
    }
};