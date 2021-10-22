class Solution {
public:
    vector<int> nums,copy;
    Solution(vector<int>& nums) {
        this->nums=nums;
        this->copy=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for(int i=nums.size();i>0;i--){
            int x=rand()%i;
            swap(copy[x],copy[i-1]);
        }
       
        return copy;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */