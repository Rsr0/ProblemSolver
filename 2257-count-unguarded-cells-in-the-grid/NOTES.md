**Avoid TLE**
Let's say if m=10^5 and n=1 and g = 10^5-1 guards are present one after another in the same line from first cell.
If we don't mark the guards prior for checking the guarded cells, then you end up travelling the same cell many times as you don't know some other cells of guard.
Then time complexity = (g-1) + (g-2) + ... 1 = g*(g-1)/2. So it is nearly equal to 10^9. So it leads to TLE.
​
So marking the guard cells prior to checking, stops the revisiting of cell as you stop the iteration, whenever you find a guard.