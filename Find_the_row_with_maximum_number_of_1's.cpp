/* GFG  Submission    (Row with max 1s) */

/* Problem Statement: Given a boolean 2D array of n x m dimensions where each row is sorted. 
Find the 0-based index of the first row that has the maximum number of 1's. */


/* Solution 1: */
// Time Complexity: O(M + N)
// Space Complexity: O(1) 


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size(), n = matrix[0].size();
//         int r = 0, c = n-1;
//         while(r < m && c >= 0){
//             if(matrix[r][c] == target){
//                 return true;
//             }
//             else if(matrix[r][c] > target){
//                 c--;
//             }
//             else{
//                 r++;
//             }
//         }

//         return false;
//     }
// };



/* Solution 2: Binary Search */
// Time Complexity: O(log(M * N))
// Space Complexity: O(1) 


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size(), n = matrix[0].size();
//         int lo = 0, hi = m*n-1;
//         while(lo <= hi){
//             int mid = lo + (hi - lo)/2;
//             // We can get the element at middle index using matrix[middle/col][middle%col]
//             int r = mid/n, c = mid%n;
//             if(matrix[r][c] == target){
//                 return true;
//             }
//             else if(matrix[r][c] < target){
//                 lo = mid + 1;
//             }
//             else{
//                 hi = mid - 1;
//             }
//         }
        
//         return false;
//     }
// };


