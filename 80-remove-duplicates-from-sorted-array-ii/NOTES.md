int i=0;
for(int j:nums){
if(i<2 || j>nums[i-2])  // j!=nums[i-2]
nums[i++]=j;
}
Note: no need to change first 2 elements i.e nums[0] & nums[1]
if(nums[i]!=nums[curr-2])