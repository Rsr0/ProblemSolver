// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
  
  bool ispal(string s){
    string t=s;
    reverse(t.begin(), t.end());
    return t==s;
  }
  
    // Function to check if a palindrome pair exists
    bool palindromepair(int N, string arr[]) {
        // code here
        unordered_map<string,int> mp;
        
        for(int i=0;i<N;i++){
            string s=arr[i];
            reverse(s.begin(), s.end());
            mp[s]=i;
        }
        
        for(int i=0;i<N;i++){
            for(int j=0;j<arr[i].size();j++){
                string s1=arr[i].substr(0,j);
                string s2=arr[i].substr(j);
                
                if(mp.count(s1) && ispal(s2) && mp[s1]!=i)
                    return 1;
                
                if(mp.count(s2) && ispal(s1) && mp[s2]!=i)
                    return 1;
            }
        }
        return 0;
    }

};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends