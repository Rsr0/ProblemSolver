class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string s="";
        int start=0, end=0;
        for(int i=0;i<nums.size();i++){
            s="";
           start=nums[i];
            while(i+1<nums.size() && nums[i+1]==nums[i] + 1){
                end=nums[i+1];
                i++;
            }
           s+=to_string(start);
            if(end)
                s+="->"+to_string(end);
            end=0;
            ans.push_back(s);
        }
        return ans;
    }
};