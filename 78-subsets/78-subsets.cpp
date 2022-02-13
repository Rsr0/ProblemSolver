class Solution {
public:
    typedef vector<vector<int>> vvi;
    typedef vector<int> vi;
    //O(N*2^N)
    vvi ans;
    
    // void backtrack(vi nums, vi subset, int i=0 ){
    // ans.push_back(v);
    // for(int j=i;j<A.size();j++){
    //     v.push_back(A[j]);
    //     backtrack(A,ans,v,j+1);
    //     v.pop_back();
    // }
    // }
    vector<vector<int>> subsets(vector<int>& nums) {
    
        // vi subset;
        // sort(nums.begin(),nums.end());
        // backtrack(nums, subset);
        
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){//bitmask
            vi temp;
            for(int j=0;j<n;j++){
                if(i & 1<<j) //set bits
                temp.push_back(nums[j]); //subset
            }
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};