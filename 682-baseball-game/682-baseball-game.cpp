class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int> st;

        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                st.pop();
            }
            else if(ops[i]=="D"){
                int x=st.top()*2;
                st.push(x);
            }
            else if(ops[i]=="+"){
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                st.push(y);
                st.push(x);
                st.push(x+y);
            }
            else{
                st.push(stoi(ops[i]));
            }
        }
        
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};