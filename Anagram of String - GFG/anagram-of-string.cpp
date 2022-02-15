// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
int n1=str1.size(), n2=str2.size();
vector<int> v(26,0);
for(int i=0;i<n1;i++)
    v[str1[i]-'a']++;

for(int i=0;i<n2;i++)
    v[str2[i]-'a']--;
    
int cnt=0;
for(int i=0;i<26;i++){
    if(v[i])
        cnt+=abs(v[i]);
}
return cnt;
    
}