class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    v.push_back(1);
                else
                    v.push_back(res[i-1][j]+res[i-1][j-1]);
            }
            res.push_back(v);
        }
        return res;
    }
};