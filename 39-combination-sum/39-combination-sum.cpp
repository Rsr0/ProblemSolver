class Solution {
public:
    void find(vector<int>& candidates, int target, int pos, vector<int>& curr,  vector<vector<int>>& res ){
        if(target==0){
            res.push_back(curr);
            return;
        }
        
        for(int i=pos;i<candidates.size();i++){
            if(candidates[i]>target)
                break;
            
            curr.push_back(candidates[i]);
            find(candidates, target-candidates[i], i, curr, res);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        find(candidates, target, 0, curr,  res);
        return res;
    }
};