#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    long long sum = 0;
    int l = 0;
    int minLength = INT_MAX;

    for (int r = 0; r < n; ++r)
    {
        sum += a[r];

        while (sum >= s)
        {
            minLength = min(minLength, r - l + 1);
            sum -= a[l];
            ++l;
        }
    }

    if (minLength == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minLength << endl;
    }

    return 0;
}
