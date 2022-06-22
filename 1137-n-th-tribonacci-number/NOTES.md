### static array
```
int a[3] = {0 , 1 , 1} ;
for(int i = 3 ; i <= n ; i++)
{
a[i%3] += a[(i+1)%3] + a[(i+2)%3] ;
}
return a[n%3] ;
```