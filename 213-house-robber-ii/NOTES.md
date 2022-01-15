**same logic as house robber 1**
```
ans1=max sum leaving first house(0)
ans2=max sum leaving last house(n-1)
```
​
-------------------------------------
int NS = nums.size();
if(NS == 0) return 0;
if(NS == 1) return nums[0];
vi dp(NS);
dp[0] = nums[0];
for(int i = 1; i < NS; i++){
dp[i] = max( nums[i] + ((i>1)?dp[i-2]:0), i > 0?dp[i-1]:0);
}
vi Dp(NS);
Dp[0] = 0;
for(int i = 1; i < NS; i++){
Dp[i] = max( nums[i] + ((i>1)?Dp[i-2]:0), i > 0?Dp[i-1]:0);
}
return max(dp[NS-2], Dp[NS-1]);