class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 vector<int>res;
    int n= nums.size();
   unordered_map<int,int> m; // inserting
    
    for(int i=0;i<n;i++) m[nums[i]]=i;
        
    for(int i=0;i<n;i++){
        int curr=target-nums[i];
        if(m.find(curr)!=m.end()){
            if(i!=m[curr]){  //not the same index
            res.push_back(i);
            res.push_back(m[curr]);
            }
        }
        m.erase(nums[i]); // no repeatition
    }
        return res;
   }
        
};