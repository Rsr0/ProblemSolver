class Solution {
public:
    vector<int> nums;
    Solution(vector<int>& nums) {
        this->nums=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> res(nums);
        for(int i=0;i<res.size();i++){
            int idx=rand()%(res.size()-i);
            swap(res[i],res[i+idx]);
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */