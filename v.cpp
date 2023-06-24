// #include <bits/stdc++.h>
// using namespace std;
// int calcHour(int k, int n, vector<int>& v){
//     long long totalHour = 0;
//     for(int i = 0; i < n; i++){
//     // totalHour += ceil((v[i] * 1.0) / k);
//     totalHour += ceil((double)v[i] / (double)k);
//     }

//     return totalHour;
// }
// int minimumRateToEatBananas(vector<int> v, int h) {
//     int n = v.size();
//     // long long ans = -1;
//     long long maxEle = *max_element(v.begin(), v.end());
//     long long low = 1, high = maxEle;

//     while(low <= high){
//         long long mid = low + (high - low) / 2;
//         int reqTime = calcHour(mid, n, v);
//         if(reqTime <= h){
//             // ans = mid;
//             high = mid - 1;
//         }
//         else {                      // if(reqTime > h)
//             low = mid + 1;
//         }
//     }

//     return low;
// }

// int mian(){
//     vector<int> v = {3,6,7,11};
//     int h = 8;

//     int ans = minimumRateToEatBananas(v, h);

//     count<<ans;






//     return 0;   
// }