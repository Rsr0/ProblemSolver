### backtrack
aab -> 2
a is palindrome
*1 length* :     a | ab   ->    a | a | b       a | ab |   X     ab is not palindrome
aa is palindrome
*2 length*:      aa | b  -> aa | b |
*3 length*:      aab     X
​
​
​
​
vector<vector<string>> partition(string s) {
vector<vector<string>> ans;
vector<string> path;
dfs(s,0,path,ans);
return ans;
}
void dfs(string s, int start, vector<string>& path,  vector<vector<string>>& ans){
if(s.length()==start){
ans.push_back(path);
return;
}
for(int i=start;i<s.length();i++){
if(isPal(s,start,i)){
path.push_back(s.substr(start,i-start+1));
dfs(s, i+1, path,ans);
path.pop_back(); // backtrack
}
}
​
}
bool isPal(string s, int start, int end){
while(start<=end){
if(s[start]!=s[end])
return false;
start++; end--;
}
return true;
}
​