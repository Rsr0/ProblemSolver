bool comp(const vector<int>&v1, const vector<int>&v2){
    return (v1[0]<v2[0]);
}

class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end(),comp); //sort in ascending start points
        
        int first=intervals[0][0];
        int second=intervals[0][1];
        for(int i=0;i<intervals.size();i++){
           if(intervals[i][0] > second){
               res.push_back({first,second});
               second=intervals[i][1];
               first=intervals[i][0];
           }
            else
                second=max(second,intervals[i][1]);
        }
        res.push_back({first,second});
        return res;
    }
};