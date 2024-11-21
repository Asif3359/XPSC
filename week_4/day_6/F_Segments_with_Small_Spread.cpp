#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    deque<long long> minD, maxD;

    long long l = 0, result = 0;

    for (long long r = 0; r < n; r++)
    {
        while (!minD.empty() && a[minD.back()] >= a[r])
        {
            minD.pop_back();
        }
        minD.push_back(r);

        while (!maxD.empty() && a[maxD.back()] <= a[r])
        {
            maxD.pop_back();
        }
        maxD.push_back(r);

        while (a[maxD.front()] - a[minD.front()] > k)
        {
            l++;
            if (minD.front() < l)
                minD.pop_front();
            if (maxD.front() < l)
                maxD.pop_front();
        }

        result += r - l + 1;
    }

    cout << result << endl;

    return 0;
}
