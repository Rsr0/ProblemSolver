class Solution {
public:
    bool isValidSerialization(string preorder) {
        stringstream ss(preorder);
        string t;
        
        int slots=1;
        while(getline(ss,t,',')){   // splitting by ,
           
            slots--;
          
            if(slots<0) return 0;
          
            if(t!="#") // non leaf node
                slots+=2;  // slots for children
        }
        
        return slots==0;
    }
};