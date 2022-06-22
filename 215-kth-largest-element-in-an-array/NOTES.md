### sorting
O(n + nlogn)
### max heap
o(n + k log n) = O(n)
```
priority_queue<int> p;
int req_size=nums.size()-k+1;
for(int i=0;i<nums.size();i++){
p.push(nums[i]);
if(i>=req_size){
p.pop();
}
// cout<<p.top();
}
return p.top();
```
### min heap
O(n + (n-k) log (n-k)) = O(n)