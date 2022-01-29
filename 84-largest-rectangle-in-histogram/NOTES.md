### o(n)
stack<int> st;
int res=0;
heights.push_back(0); // handle last element in stack
for(int i=0;i<heights.size();i++){
while(!st.empty() && heights[i]<heights[st.top()]){
int top = st.top();
int h = heights[top];
st.pop();
int t=h*(st.empty()?i:i-st.top()-1);
cout<<t;
res=max(res,t);
}
st.push(i);
}
return res;