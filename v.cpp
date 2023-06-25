#include <bits/stdc++.h>
using namespace std;
int calc(int day, int k, int n, vector<int> &bloomDay)
{
    int num = 0;
    int i = 0;
    while (i < n)
    {
        if (i + k - 1 < n)
        {
            bool isPossible = true;
            for (int j = 0; j < k; j++)
            {
                if (bloomDay[i + j] > day)
                {
                    isPossible = false;
                    break;
                }
            }
            if (isPossible)
            {
                num++;
                i += k;
            }
            else
            {
                i++;
            }
        }
    }

    return num;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int n = bloomDay.size();
    int maxEle = *max_element(bloomDay.begin(), bloomDay.end());
    for (int i = 1; i <= maxEle; i++)
    {
        int num = calc(i, k, n, bloomDay);
        if (num == m)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {7, 7, 7, 7, 12, 7, 7};
    int m = 2, k = 3;

    cout<<"Hello";

    int ans = minDays(v, m, k);

    cout << ans;

    return 0;
}