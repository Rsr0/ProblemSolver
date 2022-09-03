class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        queue<int> q;
        for(int i=1;i<10;i++)
            q.push(i);
        
        while(--n){
            int sz=q.size();
            
            for(int i=0;i<sz;i++){
                int curr=q.front();
                q.pop();
            
                for(int j=0;j<10;j++)
                if(abs(curr%10 - j)==k)
                    q.push(curr*10 + j);
            }
        }
        
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        
        return res;
    }
};