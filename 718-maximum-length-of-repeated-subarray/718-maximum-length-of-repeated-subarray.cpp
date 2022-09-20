class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        int res=INT_MIN;
        vector<vector<int>> dp(n1, vector<int>(n2,0));
        
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
               if(nums1[i]==nums2[j]){
                   dp[i][j]=1;
                   if(i>0 && j>0)
                       dp[i][j]+=dp[i-1][j-1];
               }
                  res=max(res, dp[i][j]);
            }
        }
        return res;
    }
};