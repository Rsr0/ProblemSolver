## dp o(n)
int f1=0,f2=0;
// f1=cost[1], f2=cost[0];
//for(int i=2;i<n;i++)
for(int i=cost.size()-1;i>=0;i--){
int f0=cost[i] + min(f1,f2);
f2=f1;
f1=f0;
}
return min(f1,f2);