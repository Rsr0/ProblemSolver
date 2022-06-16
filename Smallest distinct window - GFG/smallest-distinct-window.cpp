// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        unordered_map<char, int> mp;
        for (auto i : str)
            mp[i]++;

        unordered_map<char, int> mp1;
        int j = 0, i = 0;
        int ans = INT_MAX;            
            
        while(i<str.size()){
            mp1[str[i]]++;
            if(mp.size()==mp1.size()){
                ans=min(ans,i-j+1);
                while(mp.size()==mp1.size() && j<i){
                    mp1[str[j]]--;
                    if(mp1[str[j]]==0)
                        mp1.erase(str[j]);
                    j++;
                    ans=min(ans,i-j+2);
                }
            }
            i++;
        }
        ans=min(ans,i-j+1);
        return ans;

    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends