Make every number i or 0
* x >= i -> i
* x< i -> 0
​
```
sort the array
Traverse the array
updated sum=(n-i)*arr[i]
ans = min(ans, sum - updated sum)
```
​
[4,1,6,5] -> [4,0,4,4]
1, 4, 5, 6 = 16
0, 4, 4, 4 = 12
ans=16-12=4
​