class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();     
        
        int ans=INT_MIN;
        for(int start=0;start<m;start++){
             vector<int> sums(n);
            for(int end=start;end<m;end++){
                set<int>s={0};
                int prefSum=0;
                for(int i=0;i<n;i++)
                    sums[i]+=matrix[i][end];
                
                for(int sum:sums){
                    prefSum+=sum;
                    auto it=s.lower_bound(prefSum-k);
                    if(it!=s.end())
                        ans=max(ans,prefSum-(*it));
                
                    s.insert(prefSum);
                }
            }
        }
     
        return ans;
    }
};