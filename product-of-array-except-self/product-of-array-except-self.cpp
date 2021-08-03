class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> left(n,1);
    
        for(int i=1;i<n;i++){   //left
            left[i]=left[i-1]*nums[i-1];
        }
       
        
        int pre=1;
        for(int i=n-2;i>=0;i--){   // right 
            pre=pre*nums[i+1];
            left[i]=left[i]*pre;
        }
        
        return left;
        
    }
};