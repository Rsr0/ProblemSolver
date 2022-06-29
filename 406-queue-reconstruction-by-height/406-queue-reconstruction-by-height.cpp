class Solution {
public:
    static bool cmp(vector<int>& p1, vector<int>& p2){
        if(p1[0]==p2[0]) return p1[1]<p2[1];  // ascending taller front heights
        else 
            return p1[0]>p2[0];  // descending heights
    }
      
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res;
        sort(people.begin(), people.end(),cmp);
        int n=people.size(); 
        
        for(int i=0;i<n;i++)
            res.insert(res.begin()+people[i][1], people[i]);
        
        return res;
    }
};