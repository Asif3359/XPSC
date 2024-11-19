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
    int maxLength = 0;

    for (int r = 0; r < n; ++r)
    {
        sum += a[r];

        while (sum > s)
        {
            sum -= a[l];
            ++l;
        }

        maxLength = max(maxLength, r - l + 1);
    }

    cout << maxLength << endl;

    return 0;
}
