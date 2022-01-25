class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return 0;
        
        bool flag=0;
        int i=1;
        while(i<n && arr[i-1]<arr[i]){
            i++;
        }
        if(i==1 || i==n)
            return 0;
        
        while(i<n && arr[i-1]>arr[i]){
            i++;
        }
        if(i==n)
            return 1;
        return 0;
    }
};