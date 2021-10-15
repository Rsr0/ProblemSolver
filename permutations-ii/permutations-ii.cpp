class Solution {
public:
    
vector<int> temp;
set<vector<int>> hash;
    
    void rec(vector<int> nums, int n){
        if(nums.size()==temp.size()){
            hash.insert(temp);
            return;
        }
        
        for(int i=n;i<nums.size();i++){
            temp.push_back(nums[i]);
            swap(nums[i],nums[n]);
            rec(nums,n+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        rec(nums,0);
        for(auto i:hash) ans.push_back(i);
    
        return ans;
    }
};