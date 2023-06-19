/* Implement Upper Bound => Smallest index such that arr[ind] > x */

/*                               inbuilt function
int ind = upper_bound(vec.begin(), vec.end(), x) - vec.begin();              for vector
int ind = upper_bound(arr, arr + n, x) - arr;              for array      */



/* Solution 1: Brute Force  (Using linear search) */
// Time Complexity: O(N)
// Space Complexity: O(1)


// #include <bits/stdc++.h>
// using namespace std;

// int upperBound(vector<int> &arr, int x, int n) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > x) {
//             // upper bound found:
//             return i;
//         }
//     }
//     return n;
// }

// int main()
// {
//     vector<int> arr = {3, 5, 8, 9, 15, 19};
//     int n = 6, x = 9;
//     int ind = upperBound(arr, x, n);
//     cout << "The upper bound is the index: " << ind << "\n";
//     return 0;
// }



/* Solution 2: Optimal Approach   (Using Binary Search)   */
// Time Complexity: O(logN)
// Space Complexity: O(1)



// #include <bits/stdc++.h>
// using namespace std;

// int upperBound(vector<int> &arr, int x, int n) {
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;    
//         // maybe an answer
//         if (arr[mid] > x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {3, 5, 8, 9, 15, 19};
//     int n = 6, x = 9;
//     int ind = upperBound(arr, x, n);
//     cout << "The upper bound is the index: " << ind << "\n";
//     return 0;
// }




/* It is differnet from upper_bound but given in link */

/* GFG  Submission    (Ceil The Floor) */

/* Problem Statement: Given an array of integers nums which is sorted in ascending order, and an integer target, 
write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity. */



/* Solution 1: Brute Force   */
// Time Complexity: O(N)
// Space Complexity: O(1)


// class Solution{
//   public:
//     // Function to find floor of x
//     // n: size of vector
//     // x: element whose floor is to find
//     int findFloor(vector<long long> v, long long n, long long x){
//         int ans = -1;
//         for(int i = 0; i < n; i++){
//             if(v[i] <= x){
//                 ans = i;
//             }
//             else{
//                 break;
//             }
//         }
        
//         return ans;
//     }
// };



/* Solution 2: Optimal Approach   (Using Binary Search)   */
// Time Complexity: O(logN)
// Space Complexity: O(1)


// class Solution{
//   public:
//     // Function to find floor of x
//     // n: size of vector
//     // x: element whose floor is to find
//     int findFloor(vector<long long> v, long long n, long long x){
//         int ans = -1;
//         int low = 0, high = n-1;
//         while(low <= high){
//             int mid = low + (high - low) / 2;
//             if(v[mid] <= x){
//                 ans = mid;
//                 low = mid + 1;
//             }
//             else{
//                 high = mid - 1;
//             }
//         }
        
//         return ans;
//     }
// };