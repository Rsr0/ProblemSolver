class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                st.push(i);
            }
            else if (s[i]==')'){
                if(cnt>0){
                    cnt--;
                    st.pop();
                }
                else
                    st.push(i);
            }
        }
        
        while(!st.empty()){
            int x=st.top();
            s.erase(x, 1); // removing paranthesis
            st.pop();
        }
        return s;
    }
};