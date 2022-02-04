// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    struct Trie{
        Trie* child[26];
        int count;
        Trie(){
            for(int i=0;i<26;i++)
                child[i]=NULL;
            count=0;
        }
    };
    
    void insert(string s, Trie* root){
        int n=s.size();
        Trie* curr=root;
       
        for(int i=0;i<n;i++){
            int idx=s[i]-'a';
            if(!curr->child[idx])
                curr->child[idx] = new Trie();
                
            curr->count++;
            curr=curr->child[idx];
        }
    }
    
    string prefix(string s, Trie* root){
        Trie* curr=root;
        int n=s.size();
        string pre="";
       
        for(int i=0;i<n;i++){
            int idx=s[i]-'a';
            if(curr->count==1)
                break;
            pre+=s[i];
            curr=curr->child[idx];
        }
        return pre;
    }
    
    vector<string> findPrefixes(string arr[], int n)
    {
        //code here
        Trie* root = new Trie();
        for(int i=0;i<n;i++)
            insert(arr[i], root);
        
        vector<string> res;
        for(int i=0;i<n;i++){
            string s=prefix(arr[i], root);
            res.push_back(s);
        }
        return res;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
  // } Driver Code Ends