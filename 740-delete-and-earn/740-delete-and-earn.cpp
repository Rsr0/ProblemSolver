class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> freq(10001,0);
        for(auto i:nums)
            freq[i]++;
        
        int maxVal=0, prevMax=0;
        for(int i=0;i<10001;i++){
            int curr=max(maxVal, prevMax + i*freq[i]);
            prevMax=maxVal;
            maxVal=curr;
        }
        return maxVal;
    }
};