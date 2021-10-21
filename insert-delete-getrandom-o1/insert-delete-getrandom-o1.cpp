class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int, int> m;

    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(m.find(val)==m.end()){
            nums.push_back(val);
             m[val]=nums.size()-1;
            return true;
        }
        return false;
      
    }
    
    bool remove(int val) {
        if(m.find(val)!=m.end()){
            int last=nums.back();
            m[last]=m[val];
            nums[m[val]]=last;
            nums.pop_back();
            m.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
       return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */