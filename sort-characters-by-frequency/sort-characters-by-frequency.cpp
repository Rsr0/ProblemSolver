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
            
            auto curr=pq.top(); // pair<int, char>
            pq.pop();
            int count=curr.first;    // frequency
            while(count > 0){   
                ans+=curr.second;  // character
                    count--;
            }
        }
        return ans;
    }
};