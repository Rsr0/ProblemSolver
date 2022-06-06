### O(MN)
check each node address of A with each node of B
​
### Hashing
O(M + N), O(N)
store address of each nodes of List A in hash
check address of each nodes  of B in hash
​
### O(2M)
O(max(M,N) + O(M-N) + O(min(M,N)))
​
L1 : length of A
L2 : length of B
​
diff=L2-L1   // L1-L2
skip diff nodes of longest List
ptr of A and B align  and traverse
return where both adrress matches
​
**easy sol**
Traverse both List together
if one node reaches end -> point it to other list head
similarly for other list  (skip nodes l1-l2)
​
List ptr get align after traversal of both list
​