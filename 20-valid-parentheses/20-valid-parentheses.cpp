class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        if(s[0]==')' || s[0]==']' || s[0]=='}')
            return 0;
        
        for(auto c:s){
            if(c=='(' || c=='[' || c=='{')
                st.push(c);
            else{
                if(st.empty()) return 0;
                else if(c==')' && st.top()!='(') return 0;
                else if(c=='}' && st.top()!='{') return 0;
                else if(c==']' && st.top()!='[') return 0;
                st.pop();
            }
        }
        return st.empty(); 
    }
};