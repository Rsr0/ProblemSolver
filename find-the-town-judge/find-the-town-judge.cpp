class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> h(n+1, 0);
        for(auto i:trust){
            h[i[0]]--; // out
            h[i[1]]++; // in
        }
        
          // in-out=n-1
        for(int i=1;i<=n;i++){
            if(h[i]==n-1)
                return i;
        }
        return -1;
    }
};