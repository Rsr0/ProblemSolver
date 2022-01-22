// { Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
  
  bool isPal(string s){
      int i=0, j=s.size()-1;
      while(i<j){
          if(s[i]!=s[j])    return 0;
          i++, j--;
      }
      return 1;
  }
  
    int palindromeSubStrs(string s) {
        // code here
        int n=s.size();
        unordered_map<string, int> mp;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(s[i]!=s[j])  continue;
                else{
                    string str=s.substr(i, j-i+1);
                    if(isPal(str))
                        mp[str]++;
                }
            }
        }
        return mp.size();
    }
};

// { Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}
  // } Driver Code Ends