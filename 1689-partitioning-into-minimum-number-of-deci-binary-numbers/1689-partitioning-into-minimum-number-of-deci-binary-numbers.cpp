class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(auto i:n){
            if(i=='9') return 9;
            ans=max(ans,i-'0');
        }
        return ans;
    }
};