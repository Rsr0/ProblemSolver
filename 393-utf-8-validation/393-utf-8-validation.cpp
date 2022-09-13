class Solution {
public:
    
    int GetBytes(int number)
    {
        if (number >= 192  && number <= 223)
        {
            return 2;
        }
        else if (number >= 224 && number <= 239)
        {
            return 3;
        }
        else if (number >= 240 && number <= 247)
        {
            return 4;
        }
        else if (number <= 127)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    bool validUtf8(vector<int>& data) {
        int i=0;
        while(i<data.size()){
             int bytes = GetBytes(data[i]);
            
            if (bytes == 0) return false;
        
            if (data.size() - i < bytes) return false;
            
            i++;
            
            for(int j=1;j<bytes;i++,j++)
            {
                if (data[i] > 191 || data[i] < 128) return false;
            }
        }
        return true;
    }
};