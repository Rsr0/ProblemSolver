* Start from boundaries and use BFS/DFS to mark cells.
* Take Two 2-D arrays for Atlantic and pacific ocean to mark visited cells
* Start DFS/BFS from Atlantic boundary and Pacific boundary
* Cells that are marked by both the Atlantic and Pacific boundaries will be our answer
Note: While running BFS/DFS we will check that the neighboring cell is greater or equal to current cell