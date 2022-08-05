class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        	sort(nums.begin(), nums.end());
		long long *arr = new long long[target + 1];
		arr[0] = 1;
		for(int i = 1; i < target + 1; i ++) {
			arr[i] = 0;
			for(int j = 0; j < nums.size(); j ++) {
				int n = i - nums[j];
				if(n < 0 || arr[i] > 2147483648) break;
				else arr[i] += arr[n];
			}
		}
		return int(arr[target]);
    }
};