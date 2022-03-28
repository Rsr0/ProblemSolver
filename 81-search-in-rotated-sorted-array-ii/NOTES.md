​
```
return find(nums.begin(),nums.end(),target)==nums.end() ? 0:1;
```
​
Duplicates
if(nums[l] == nums[mid] and nums[mid] == nums[h])
{
l++; h--;
continue;
}