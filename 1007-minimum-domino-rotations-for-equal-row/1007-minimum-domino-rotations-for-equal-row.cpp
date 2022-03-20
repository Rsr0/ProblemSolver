class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
      int n=tops.size();
        int t[7]={0}, b[7]={0}, same[7]={0};
        
        for(int i=0;i<n;i++){
            t[tops[i]]++;
            b[bottoms[i]]++;
            if(tops[i]==bottoms[i])
                same[tops[i]]++;
        }
        
        for(int i=1;i<7;i++){
            if(t[i]+b[i]-same[i]==n)
                return n - max(t[i],b[i]);
        }
        
        return -1;
        
    }
};