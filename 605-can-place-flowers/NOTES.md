* place at most (c - 1) / 2 flowers, where c is count of continuous 0
* if first or last position is 0 -> extra c++  ([0],1)
```
int  cnt=0; //count continuous 0s
for(int i=0;i<=sz;i++){
if(i<sz && flowerbed[i]==0){
cnt++;
//[0] 1
if(i==0 )
cnt++;
if(i==sz-1)
cnt++;
}
else{
n-=(cnt-1)/2;
if(n<=0) return 1;
cnt=0;
}
}
return 0;
```