class Solution {
public:
  
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        if(trips.size()==1) return trips[0][0]<=capacity;
        int track[1001]={};
        
        for(auto t:trips){
            track[t[1]]+=t[0]; // seat filled 
            track[t[2]]-=t[0]; // seat left
        }
        
        for(int i=0;i<1001;i++){
            if(capacity<0) break;
            capacity-=track[i];
        }
        
        return capacity>=0;
      
    }
};