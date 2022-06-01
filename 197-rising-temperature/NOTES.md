DATEDIFF(w1.recordDate,w2.recordDate)=1;
​
w2.recordDate = DATE_ADD(w1.recordDate, INTERVAL 1 DAY)