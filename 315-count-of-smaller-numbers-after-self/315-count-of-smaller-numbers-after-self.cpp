#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set                                               \
    tree<pair<int, int>, null_type, less<pair<int, int> >, \
         rb_tree_tag, tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        ordered_set s;
        res.push_back(0);
        s.insert({nums[n-1], n-1});
        for(int i=n-2;i>=0;i--){
            res.push_back(s.order_of_key({nums[i], i}));
            s.insert({nums[i], i});
        }
        reverse(res.begin(), res.end());
        return res;
    }
};