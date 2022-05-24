### stack O(n)
pushes index
push(-1)
​
'('-> push(i)
')' ->{
pop()
if(empty())  push(i)
else  max(ans, i-top)
}
### left right
```
int left=0, right=0;
int maxLength=0;
for(int i=0;i<n;i++){
if(s[i]=='(') left++;
else right++;   // s[i]==')'
if(left==right)
maxLength=max(maxLength, 2*right);
else if(left<right){
left=right=0;
}
}
left=right=0;
for(int i=n-1;i>=0;i--){
if(s[i]=='(') left++;
else right++;
if(left==right)
maxLength=max(maxLength, 2*left);
else if(left>right)
left=right=0;
}
```
​