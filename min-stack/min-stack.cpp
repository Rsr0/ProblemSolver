class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> v;
    int Min = INT_MAX;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(val<Min) 
            Min=val;
        
        v.push_back(val);
    }
    
    void pop() {
        if(!v.empty()){
            if(v.back()==Min){
                v.pop_back();
                
                Min=INT_MAX;
                for(int i=0;i<v.size();i++){
                Min=min(Min, v[i]);
                }
            }
            else v.pop_back();
        }
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
       return Min;
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