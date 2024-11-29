#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long xOR = 0;
    for (long long i = 0; i < n; i++)
    {
        xOR ^= arr[i];
    }

    if (xOR == 0)
    {
        cout << 0 << '\n';
    }
    else if (n % 2 == 1)
    {
        cout << xOR << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
