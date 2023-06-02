/* Problem Statement: Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements 
and modify arr2 so that it contains the last M elements. */


/* GFG  Submission    (88. Merge Sorted Array) */


/* Solution 1: Brute Force   */
// Time Complexity: O(n + m) + O(n + m)
// Space Complexity: O(n + m)


// class Solution{
//     public:
//         //Function to merge the arrays.
//         void merge(long long arr1[], long long arr2[], int n, int m) 
//         { 
//             vector<long long> temp;
//             int i = 0, j = 0;
//             while(i < n && j < m){
//                 if(arr1[i] < arr2[j]){
//                     temp.push_back(arr1[i]);
//                     i++;
//                 }
//                 else{
//                     temp.push_back(arr2[j]);
//                     j++;
//                 }
//             }
    
//             while(i < n){
//                 temp.push_back(arr1[i]);
//                 i++;
//             }
    
//             while(j < m){
//                 temp.push_back(arr2[j]);
//                 j++;
//             }
            
//             for(int i = 0; i < n+m; i++){
//                 if(i < n){
//                     arr1[i] = temp[i];
//                 }
//                 else{
//                     arr2[i-n] = temp[i];
//                 }
//             }
//         }
// };




    
/* Solution 2: Optimal Solution 1 */
// Time Complexity: O(min(n, m)) + O(n Log n) + O(m Log m)
// Space Complexity: O(1) 


// class Solution{
//     public:
//         //Function to merge the arrays.
//         void merge(long long arr1[], long long arr2[], int n, int m) 
//         { 
//             int i = n-1, j = 0;
//             while(i >= 0 && j < m){
//                 if(arr1[i] > arr2[j]){
//                     swap(arr1[i], arr2[j]);
//                     i--; j++;
//                 }
//                 else{
//                     break;
//                 }
//             }
            
//             sort(arr1, arr1 + n);
//             sort(arr2, arr2 + m);
//         } 
// };




/* Solution 3: Optimal Solution 2   (Gap method)     */
// Time complexity: O(log(n + m)) * O(n + m)
// Space Complexity: O(1) 


// class Solution{
//     public:
//         //Function to merge the arrays.
//         void merge(long long arr1[], long long arr2[], int n, int m) 
//         { 
//             int gap = ceil((float)(n + m) / 2);
//             while(gap > 0){
//                 int i = 0; 
//                 int j = gap;
//                 while(j < n + m){
//                     // arr1 and arr1
//                     if(j < n && arr1[i] > arr1[j]){
//                         swap(arr1[i], arr1[j]);
//                     }
//                     // arr1 and arr2
//                     else if(j >= n && i < n && arr1[i] > arr2[j - n]){
//                         swap(arr1[i], arr2[j - n]);
//                     }
//                     // arr2 and arr2
//                     else if(j >= n && i >= n && arr2[i - n] > arr2[j - n]){
//                         swap(arr2[i - n], arr2[j -n]);
//                     }
//                     i++;
//                     j++;
//                 }
//                 if(gap == 1){
//                     gap = 0;
//                 }
//                 else{
//                     gap = ceil((float) gap / 2);
//                 }
//             }
//         } 
// };