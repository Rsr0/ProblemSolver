### iterative/casading
vector<vector<int> > ans={{}};
for(int num:nums){
int n=ans.size();         // length
for(int i=0;i<n;i++ ){
vector<int>s=ans[i];
s.push_back(num);
ans.push_back(s);
}
}
return ans;
​
### Backtracking
void backtrack(vi nums, vi subset, int i=0 ){
ans.push_back(v);
for(int j=i;j<A.size();j++){
v.push_back(A[j]);
backtrack(A,ans,v,j+1);
v.pop_back();
}
}
​
### Bit manipulation
int n=nums.size();
for(int i=0;i<(1<<n);i++){//bitmask
vi temp;
for(int j=0;j<n;j++){
if(i & 1<<j) //set bits
temp.push_back(nums[j]); //subset
}
ans.push_back(temp);
}