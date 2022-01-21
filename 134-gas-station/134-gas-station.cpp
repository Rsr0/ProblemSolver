class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0, rem=0, curr=0;
        for(int i=0;i<cost.size();i++){
            curr+=gas[i]-cost[i];
            if(curr<0){
                start=i+1;
                rem+=curr;
                curr=0;
            }
        }
        return curr+rem>=0 ? start:-1;
    }
};