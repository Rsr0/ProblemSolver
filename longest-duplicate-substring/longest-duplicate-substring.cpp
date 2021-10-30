class Solution {
public:
    
    string longestDupSubstring(string s) {
        int n=s.length();
        int left=0, right=n;
        string res;
        // binary search
        while(left<right){
            string dup;
            int mid=left+(right-left)/2;
            int d=rabin(s,mid);
            
            dup=((d==-1) ? "" : s.substr(d,mid) );
            
            if((int)dup.size() > (int)res.size()){
                res=dup;
                left=mid+1;
            }
            else
                right=mid;
        }
        return res;
    }
    
    
    int rabin(string s, int len){
        int n=s.size();
        int mod=1000000007;
        unordered_map<long long int, vector<int>> mp;
        
        //preprocess
        vector<long long> power(n);
        for(int i=0;i<n;i++)  
            power[i] = (i==0) ? 1 : (power[i-1] * 31) %mod;
        
        vector<long long>hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[i+1] = (hash[i] + (s[i]- 'a' + 1)*power[i]) %mod;
        }        
         // hash of all substrings of length
        for(int i=0; i+len-1<n;i++){
            long long curr=(hash[i+len] - hash[i] + mod)%mod;
             curr = (curr * power[n-i-1]) % mod;  // optimisation
            
            if(mp.count(curr)){
                for(int &index : mp[curr]){
                    if(s.substr(index,len)==s.substr(i,len)) 
                        return index;
                }
                mp[curr].push_back(i);
            }
            else
                mp[curr]={i};
        }
        return -1;
           
    }
};