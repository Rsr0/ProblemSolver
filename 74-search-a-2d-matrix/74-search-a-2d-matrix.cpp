class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int lo=0,hi=m*n-1;
        while(lo<=hi){     
            int mid=(lo+hi)/2;
            if(matrix[mid/n][mid%n] == target) 
                return 1;
            else if(matrix[mid/n][mid%n] > target)
                hi=mid-1;
            else              
                lo=mid+1;
        }
        
        return false;
    }
    
    
};