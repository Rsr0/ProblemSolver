class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int track[1001]={};
        int start=1000, end=0;
        for(auto t:trips){
            track[t[1]]+=t[0]; //seats filled
            track[t[2]]-=t[0]; //seats left
            
            start=min(start, t[1]);
            end=max(end, t[2]);
        }
        
        for(int i=start;i<=end;i++){
            capacity-=track[i];
            if(capacity<0) return 0;    
        }
        return capacity>=0;
    }
};