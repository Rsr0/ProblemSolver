// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        map<char, bool> mp;
        string ans="";
        for(char c:a)
            mp[c]=1;
        
        for(char c:a){
            for(char i='a';i<c;i++){
                if(mp[i]){  // smaller character than c
                    for( char ch : a){
                        if(ch==c)   ans+=i;
                        else if(ch==i)   ans+=c;
                        else ans+=ch;
                    
                    }
             
                    return ans ;// updated string
                }
            }
            mp[c]=0;
        }
        return a;   // original string 
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends