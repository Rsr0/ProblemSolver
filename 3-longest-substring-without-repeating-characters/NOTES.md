### **Sliding Window:** O(n)
int ans=0;
int left=0, right=0;
vector<int> chars(128);
while(right<s.length()){
char r = s[right];
chars[r]++;
while(chars[r]>1){
char l = s[left];
chars[l]--;
left++;
}
ans = max(ans, right-left+1);
right++;
}
return ans;