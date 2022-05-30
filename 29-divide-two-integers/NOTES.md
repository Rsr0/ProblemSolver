// divisor * 2^i
```
for(int i=31;i>=0;i--){
if(temp + (b<<i) <=a){
temp+=(b<<i);
res|=(1<<i);
}
}
```