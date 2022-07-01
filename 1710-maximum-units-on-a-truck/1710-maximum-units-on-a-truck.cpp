
class Solution {
public:

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(),[](vector<int>&a, vector<int>&b){
            return a[1]>b[1];
        });

        int res=0;
        for(auto i:boxTypes){
            if(i[0]>truckSize){
                if(truckSize>0)
                    res+=(truckSize*i[1]);
                break;
            }
            
            res+=(i[0]*i[1]);
            truckSize-=i[0];
        }   
        return res;
    }
};