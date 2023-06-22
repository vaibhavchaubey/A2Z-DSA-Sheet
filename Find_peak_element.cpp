/* Leetcode  Submission    (162. Find Peak Element) */

/* Problem Statement: A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, 
return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a 
neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time. */


/* Solution 1: Brute Force   */
// Time Complexity: O(N)
// Space Complexity: O(1)


// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             if((i == 0 || nums[i-1] < nums[i]) && (i == n-1 || nums[i] > nums[i+1])){
//                 return i;
//             }
//         }

//         return -1;
//     }
// };



/* Solution 2: Optimal Approach   (Using Binary Search)   */
// Time Complexity: O(logN)
// Space Complexity: O(1)


// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         // single element
//         if(n == 1) return 0; 

//         // check if 0th/n-1th index is the peak element
//         if(nums[0] > nums[1]) return 0;
//         if(nums[n-1] > nums[n-2]) return n-1;

//         // search in the remaining array
//         int low = 1, high = n-2;
//         while(low <= high){
//             int mid = low + (high - low) / 2;
//             if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
//                 return mid;
//             } 

//             // mid on the increasing path that means our ans will be in right
//             else if(nums[mid] > nums[mid-1]){
//                 low = mid + 1;
//             }

//             // mid is on the decreasing path  peak will be on left side
//             // also handle the case when  nums[mid-1]  > nums[mid] < nums[mid+1]
//             else{                           // if(nums[mid] > nums[mid-1])
//                 high = mid - 1;
//             }
//         }

//         return -1;
//     }
// };