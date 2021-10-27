class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        
        string row_str[numRows];
        int row=0;
        bool dir; // 1:up    0:down
        
        for(int i=0;i<s.size();i++){
            row_str[row].push_back(s[i]);
            if(row==0)
                dir=0;
            if(row==numRows-1)
                dir=1;
            
            dir==1? row-- : row++;
        }
        
        string ans="";
        for(int i=0;i<numRows;i++){
            ans+=row_str[i];
        }
        return ans;
    }
};