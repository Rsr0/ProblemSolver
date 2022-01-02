class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size(), res=0, x, y;
        if(n<2)  return 0;
        
        int mp[61]={0};
        for(int i=0; i<n; i++){
          x=time[i]%60;
          y=(60-x)%60;
          res+=mp[y];
          mp[x]++;
        }
        
        return res;
    }
};