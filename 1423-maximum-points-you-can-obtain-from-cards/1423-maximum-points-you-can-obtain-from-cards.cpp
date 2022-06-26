class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total=0, n=cardPoints.size();
        for(auto i: cardPoints)
            total+=i;
        int curr=0,i;
        for(i=0;i<n-k;i++)
            curr+=cardPoints[i];
        
        int ans=total-curr;
        while(i<n){
            curr-=cardPoints[i-(n-k)];
            curr+=cardPoints[i];
            ans=max(ans,total-curr);
            i++;
        }
        return ans;
    }
};