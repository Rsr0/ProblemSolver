class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size(), c=matrix[0].size();
        int top=0, left=0, right=c-1, bottom=r-1; 
        
        vector<int> ans;
        while(true){
            //left to right
                for(int k=left;k<=right;k++){
                    ans.push_back(matrix[top][k]);
                }
            if(++top > bottom)
                return ans;
            
            // top  to bottom
                for(int k=top;k<=bottom;k++){
                    ans.push_back(matrix[k][right]);
                }
            if(--right < left)
                return ans;
            
            // right to left
                for(int k=right;k>=left;k--){
                    ans.push_back(matrix[bottom][k]);
                }
            
            if(--bottom < top)
                return ans;
                
            // bottom to top
                for(int k=bottom;k>=top;k--){
                    ans.push_back(matrix[k][left]);
                }
            
            if(++left > right)
                return ans;
            }
    }
};