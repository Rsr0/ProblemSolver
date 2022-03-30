### O(m+n)
worst case n+m comparison
```
int i=0,j=n-1;
while(i<m && j>=0){
if(matrix[i][j]==target)
return 1;
else if(matrix[i][j]>target)
j--;
else                // matrix[i][j]<target
i++;
}
```
### O(nlog(m))
using binary search
​
making 2D as 1D array : range from 0 to n*m-1