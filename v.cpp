#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}