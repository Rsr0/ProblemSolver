### O(n)
https://leetcode.com/problems/car-pooling/discuss/390356/Most-simple-solution-O(n)-(10-lines)-with-explanation-(without-sorting-without-map-without-tree!)
https://leetcode.com/problems/car-pooling/discuss/1262161/C%2B%2B-Linear-time-complexity.-Runtime-%3A-8ms.
seat filled or seat left
​
### map
​
###  greedy
startTime[i] = pair{ t[i][1], t[i][0])
endTime[i] = pair{ t[i][2], t[i][0]}
sort(startTime)    p1.first<p2.first
sort(endTime)   p1.first<p2.first
cap=0
​
if( startTime[i].first < endTime[j].first)
cap+=startTime[i].second
if(cap>capacity) false
i++
else
cap-endTime[j].second
j++
​
true
​
​
static bool cmp(vector<int>& t1, vector<int>& t2){
return t1[1]<t2[1];
}
sort(trips.begin(), trips.end(),cmp);
for(int i=0;i<trips.size();i++){
for (int j=0;j<3;j++)
cout<<trips[i][j]<<" ";
cout<<endl;
}
int loc=trips[0][2];
for(int i=1;i<trips.size();i++){
if(loc > trips[i][1]){
if(capacity < trips[i][0]+trips[i-1][0])
return 0;
}
loc=trips[i][2];
}
return 1;