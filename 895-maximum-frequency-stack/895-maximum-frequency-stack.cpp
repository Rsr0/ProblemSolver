class FreqStack {
public:
    priority_queue<vector<int>> pq;
    unordered_map<int,int> mp; // freq map
    int cnt=0;
    
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
        pq.push({mp[val], cnt++, val});  // freq, count, val
    }
    
    int pop() {
        auto x=pq.top(); // most frequent element
        pq.pop();
        mp[x[2]]--;
        return x[2];
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */