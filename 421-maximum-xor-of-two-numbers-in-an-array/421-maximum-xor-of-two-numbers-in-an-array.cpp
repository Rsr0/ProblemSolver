class Trie{
    Trie *child[2];  
    int val;
    
    public:
        Trie(){
            child[0]=NULL;
            child[1]=NULL;
            val=0;
        }
    
    void insert(int n){
        auto curr=this;
        for(int i=30;i>=0;i--){
            bool bit=(n>>i)&1;
            if(curr->child[bit])
                curr=curr->child[bit];
            else{
                curr->child[bit]=new Trie();
                curr=curr->child[bit];
            }
        }
        curr->val=n;
    }
    
    int findXor(int n){
         auto curr=this;
        for(int i=30;i>=0;i--){
            bool bit=(n>>i)&1;
            if(curr->child[!bit]) // mismatch
                curr=curr->child[!bit];
            else
                curr=curr->child[bit];
        }
        return curr->val;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie t;
        for(auto &i:nums)
            t.insert(i);
        
        int ans=INT_MIN;
        for(auto &i:nums){
            ans=max(ans, i ^ t.findXor(i));
        }
        return ans;
    }
};