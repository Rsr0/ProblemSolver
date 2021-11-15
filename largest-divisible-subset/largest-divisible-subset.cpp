class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int> T(n, 0);
        vector<int> parent(n, 0);
        int m=0, mi=0;
        
        sort(nums.begin(), nums.end());
        for(int i=n-1;i>=0;i--){ // prefix smaller  element
            for(int j=i;j<n;j++){
                if(nums[j] % nums[i] == 0 && T[i] < 1 + T[j]){
                    T[i] = 1 + T[j];
                    parent[i] = j;
                }
            }
                    if(T[i]>m){
                        m=T[i];
                        mi=i;
                    }
                }
//             }
            
//         }
        vector<int> res;
        for(int i=0;i<m;i++){
            res.push_back(nums[mi]);
            mi=parent[mi];
        }
        return res;
    }
};