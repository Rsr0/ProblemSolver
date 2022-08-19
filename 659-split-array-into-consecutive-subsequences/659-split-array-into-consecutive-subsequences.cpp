class Solution {
public:
    bool isPossible(vector<int>& nums) {
         unordered_map<int,int>mp, need; // next number req. by subsequences
         for(int i:nums)
            mp[i]++;
         for(int i:nums){
             if(mp[i]==0)   continue;
             if(need[i]>0){ // i in existing subseq
                 need[i]--;
                 mp[i]--;
                 need[i+1]++; //next req. num is now i+1
             }
             else if(mp[i]>0 && mp[i+1]>0 && mp[i+2]>0){   // new subseq. of atleast 3 len
                 mp[i]--, mp[i+1]--, mp[i+2]--;
                 need[i+3]++; // next num in subseq
             }
            else
                return 0;
         }
        return 1;
    }
};