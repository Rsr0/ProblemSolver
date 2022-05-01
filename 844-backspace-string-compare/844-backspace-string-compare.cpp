class Solution {
public:
    
    stack<char> st;
    string solve(string s){
        for(auto it:s){
            if(it=='#'){
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(it);
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        return s;
    }
    bool backspaceCompare(string s, string t) {
         s=solve(s);
        t=solve(t);
        return s==t;
        
    }
};