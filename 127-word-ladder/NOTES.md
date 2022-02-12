## BFS O(26*n*n*w)
n is string length and for string compare, w is no of words,
(shortest distance in graph)
- wordList unordered_Set
- check end word is present
- in queue push begin word  & ladder=1
```
while(!q.empty()){
for(q.size())
q.front() & q.pop()
if(word ==end) return ladder
for(each character in word)
for(replace a characer with other 26 characters)
if( new word is present in set )
push to q & erase from set
change new word to old word
ladder++
```
​
}
​