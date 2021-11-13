class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int> ans(n);
       
        for(int i=n-1; i>=0; i--){
            int j=i+1;
            while(j<n && temp[i]>=temp[j]){
                if(ans[j]>0)
                    j=ans[j]+j;
                else 
                    j=n;
            }
            if(j<n)    // temp[j]>temp[i] || j==size
                ans[i]=j-i;
        }
 
        return ans;
    }
};