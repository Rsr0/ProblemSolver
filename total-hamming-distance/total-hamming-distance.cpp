class Solution {
public:
 
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        
        int sum=0;
        for(int i=0;i<32;i++){
            int setbits=0;
            for(int j=0;j<n;j++){
                if((1<<i) & nums[j])
                  setbits++;  
            }
            sum+=(n-setbits)*setbits;
        }
        return sum;
    }
};