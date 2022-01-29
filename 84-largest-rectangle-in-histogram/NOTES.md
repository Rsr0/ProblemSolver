**h[i] * (Rbound index - Lbound index+1)**
* 2 pass: left and right
```
stack -> pop till greater element is there
left bound -> insert s.top()+1 or 0
right bound -> insert s.top()-1 or n-1
```
* 1 pass
### o(n)
stack<int> st;
int res=0;
heights.push_back(0); // handle last element in stack
for(int i=0;i<heights.size();i++){
while(!st.empty() && heights[i]<heights[st.top()]){
int top = st.top();
int h = heights[top];
st.pop();
int t=h*(st.empty()?i:i-st.top()-1);   // height * width
cout<<t;
res=max(res,t);
}
st.push(i);
}
return res;