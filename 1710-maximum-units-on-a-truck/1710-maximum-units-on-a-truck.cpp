class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units[1001]={0};
        for(auto i:boxTypes)
            units[i[1]]+=i[0];
        int res=0;
        for(int i=1000;i>=0 && truckSize>0;i--){
            int ut=i;
            int bx=units[i];
            if(bx>0){
                int x=min(bx,truckSize);
                truckSize-=x;
                res+=(ut*x);
            }
        }
        
        return res;
    }
};