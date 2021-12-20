class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        int mini=INT_MAX;
        
        sort(arr.begin(), arr.end());
        // min difference
        for(int i=1;i<arr.size();i++)
            mini=min(mini, arr[i]-arr[i-1]);
        
        // pair with min diff
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==mini)
                res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};