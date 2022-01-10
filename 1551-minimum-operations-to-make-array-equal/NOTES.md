* we need to make all the elements equal to the Mid element (n).
*  if we make the first half equal to the mid element,
*  then other half will also become equal
​
**return n*n/4;**
​
​
```
int minOperations(int n) {
if(n & 1){ // Odd Case
int N = (n - 1) / 2;  // number of elements before mid element
return N * (N + 1);
}
int N = n / 2;  // number of elements before mean of mid elements
return N * N;
}
```
​