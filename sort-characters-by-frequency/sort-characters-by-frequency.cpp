class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        priority_queue<pair<int,char>> pq;  //maxheap
    
        for(auto c:s) freq[c]++;
        
        for(auto it:freq)
            pq.push({it.second, it.first}); //descending order of freq
        
        string ans="";
        while(!pq.empty()){
            // ans+=string(pq.top().first, pq.top().second);
            
            int size=pq.top().first; // pair<int, char>
            char ch=pq.top().second;
            pq.pop();
        
            for(int i=0;i<size;i++)   
                ans+=ch;  // adding freq times character
        }
        return ans;
    }
};