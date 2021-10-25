class MinStack {
public:
    /** initialize your data structure here. */
    
    vector<int> st, minSt;
    
    MinStack() { }
    
    void push(int val) {
        if(minSt.empty() || minSt.back()>=val)
            minSt.push_back(val);
        else
            minSt.push_back(minSt.back());
        
        st.push_back(val);
        
    }
    
    void pop() {
       st.pop_back();
        minSt.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
       return minSt.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */