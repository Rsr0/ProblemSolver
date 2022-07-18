class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n = matrix[0].size(), count = 0;
        for (int i = 0; i < m; i++){   
            vector<int> pre=matrix[i];
            for(int j=i;j<m;j++){
                unordered_map<int,int> mp; // sum count
                int total=0;
                for(int k=0;k<n;k++){
                    total+=pre[k];
                    if(total==target)    count++;
                    if(mp.count(total-target))   count+=mp[total-target];
                    mp[total]++;
                    if(j<m-1)
                        pre[k]+=matrix[j+1][k];
                }
            }
        }
        return count;
    }
};