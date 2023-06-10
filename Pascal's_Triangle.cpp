/* Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle. */
/* We have an easier formula to find out the element i.e. r-1Cc-1. */


/* Naive Approach: 
We can separately calculate n!, r!, (n-r)! and using their values we can calculate nCr. 
This is an extremely naive way to calculate. The time complexity will be O(n)+O(r)+O(n-r). */


/* Optimal Approach */
/* Approach:
The steps are as follows:
First, we will consider r-1 as n and c-1 as r.
After that, we will simply calculate the value of the combination using a loop. 
The loop will run from 0 to r. And in each iteration, we will multiply (n-i) with the result and divide the result by (i+1).
Finally, the calculated value of the combination will be our answer. */