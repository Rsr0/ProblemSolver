class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int i=0,j=n-1;
        
    // while(i<m && j>=0){
    //     if(matrix[i][j]==target)
    //         return 1;
    //     else if(matrix[i][j]>target)
    //         j--;
    //     else                // matrix[i][j]<target
    //         i++;
    // }
        
        int lo=0,hi=n-1;
        while(i<m && lo<=hi){
            if(matrix[i][hi]<target){
                i++; continue;
                }
            
            int mid=(lo+hi)/2;
            if(matrix[i][mid]==target) return 1;
            else if(matrix[i][mid]>target)
                hi=mid-1;
            else                // matrix[i][j]<target
                lo=mid+1;
        }
        
        return false;
    }
    
    
};