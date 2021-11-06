class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==2) return nums;
        
        int xor1=0, xor2=0;
        for(auto i:nums)
            xor1^=i; // xor of 2 distinct elements
        
        int pos;
        for(int i=31;i>=0;i--){
            if(xor1 & (1<<i)){
                pos=i;  // rightmost set bit position 
                break;
            }
        }
        
        for(auto i:nums){
            if(i&(1<<pos))
                xor2^=i;  // first distinct element
        }
        
        return {xor2, xor1^xor2};  // xor of set bits & unset bits
        
    }
};