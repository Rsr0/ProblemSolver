class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> s1,s2,s3,s4;
        vector<int> ans;
        
        for(auto it:nums1)
            s1.insert(it);
        for(auto it:nums2)
            s2.insert(it);
        for(auto it:nums3)
            s3.insert(it);
        
        for(auto it:nums1){
            if(s2.find(it)!=s2.end() || s3.find(it)!=s3.end())
                s4.insert(it);        
        }
        
        for(auto it:nums2){
            if(s3.find(it)!=s3.end())
                s4.insert(it);        
        }
        
        // for(auto it:nums3){
        //     if(s2.find(it)!=s2.end() || s1.find(it)!=s1.end())
        //         ans.push_back(it);        
        // }
        
        for(auto it:s4)
            ans.push_back(it);
        return ans;
        
    }
};