- sorting
- Binary Search
mid=left+(right-left)/2
count number of  element<=mid  -> (c++)
(c>mid) -> right=mid
left=mid+1
- set  s.count(n)==1   s.find()  s.insert()       o(n)
- map
- xor o(n2)
- Linked list cycle (Floyd cycle detection)  O(n) + space O(1)
- modifying visited element in array
For each number we goto its index position and multiply by -1. (nums[i]*=-1)
In case of duplicate it will be multiplied twice and the number will be +ve. (nums[i]>0)