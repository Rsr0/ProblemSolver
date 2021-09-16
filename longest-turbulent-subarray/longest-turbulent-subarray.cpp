class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        if(n<2) return 1; //[100,100] -> 1
        
        int ans=0, count=1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1])
                count++;
            
            while(i<n-1 && (arr[i]-arr[i-1])/10000.0 * (arr[i]-arr[i+1])/10000.0 > 0){  //+ve product 
                // 10000.0 to avoid integer overflow.
                count++; i++;
            }
            
            ans=max(ans,count);
            count=1;
        }
        return ans;
    }
};