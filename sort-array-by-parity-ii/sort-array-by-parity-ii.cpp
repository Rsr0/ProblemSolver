class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int odd=1, even=0;
        int n=nums.size();
        
        while(odd<n && even<n){
            if(nums[even]%2==0)
                even+=2;
            
            else if(nums[odd]%2!=0)
                odd+=2;
            
            else {          //(nums[odd]%2==0 && nums[even]%2!=0)
                swap(nums[odd],nums[even]);
                odd+=2; even+=2;
            }
        }
        return nums;
    }
};