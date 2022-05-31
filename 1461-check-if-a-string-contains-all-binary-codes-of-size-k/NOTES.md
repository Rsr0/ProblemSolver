### using set
​
int need= 1<<k;  // 2^k
cout<<need;
set<string> ans;
for(int i=k;i<=s.length();i++){
string str=s.substr(i-k,i);
if(ans.find(str)==ans.end()){
ans.insert(str);
need--;
if(need==0)
return true;
}
}
return false;
##    Rolling hash
bool hasAllCodes(string s, int k) {
int size=1<<k;                     // 2^k
vector<bool> check(size,false);
int Ones=size-1;                 //1000->111
int hash=0;
for(int i=0;i<s.length();i++){
// s.substr(i-k+1,i+1)
hash=((hash<<1) & Ones) | (s[i]-'0'); // (1100 & 111) | 1
if(i>=k-1 && !check[hash]){
check[hash]=true;
size--;
if(!size)  return true;
}
}
return false;
}