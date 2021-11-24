class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n1=firstList.size(), n2=secondList.size();
        
        if(n1==0 || n2==0) return {};
        
        vector<vector<int>> ans;
        int lo, hi;
        int i=0, j=0;
        while(i<n1 && j<n2){
            lo=max(firstList[i][0], secondList[j][0]);
            hi=min(firstList[i][1], secondList[j][1]);
            
            if(lo<=hi)
                ans.push_back({lo,hi});
            
            if(firstList[i][1]<secondList[j][1])
                i++;
            else 
                j++;
        }
        return ans;
    }
};