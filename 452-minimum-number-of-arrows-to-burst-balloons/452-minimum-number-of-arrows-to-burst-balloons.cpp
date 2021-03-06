class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n<1)
            return 0;
        
        sort(points.begin(), points.end());
        int count=1;
        int end=points[0][1];
        for(int i=1;i<n;i++){
            if(end>=points[i][0]){ //end=points[i-1][1]
                end=min(end, points[i][1]);
            }
            else{
                count++;
                end=points[i][1];
            }
        }
        
        return count;
        
    }
};