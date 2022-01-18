* add 0s on start and end of flowerbed
* check if there are 3 0s in row
```
// add 0s on start and end
flowerbed.push_back(0);
flowerbed.insert(flowerbed.begin(),0);
sz+=2;
int i=1, cnt=0;
// check if there are 3 0s in row
while(i<sz-1 && cnt<n){
if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
cnt++;
flowerbed[i]=1;
}
i++;
}
return cnt==n;
```
​
or
​
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