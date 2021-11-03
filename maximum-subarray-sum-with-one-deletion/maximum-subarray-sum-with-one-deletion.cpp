class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int left[n], right[n];
        int curr_max=arr[0], max_ans=arr[0];
        
        left[0]=arr[0];
        for(int i=1;i<n;i++){
            curr_max=max(arr[i], arr[i]+curr_max);
            max_ans=max(max_ans, curr_max);
            left[i]=curr_max;
        }
        
        curr_max=max_ans=right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            curr_max=max(arr[i], arr[i]+curr_max);
            max_ans=max(max_ans, curr_max);
            right[i]=curr_max;
        }
        
        int ans=max_ans; // no removal
        for(int i=1;i<n-1;i++)
            ans=max(ans, max(0, left[i-1]) + max(0, right[i+1]));    // 0 if -ve sum
        
        if(ans==0)
            return *max_element(arr.begin(), arr.end());  // if all elements are -ve
        return ans;
        
    }
};