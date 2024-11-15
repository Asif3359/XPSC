#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<long long> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    long long count = 0, ma = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (max(ma, vc[i]) <= q)
        {
            count++;
            ma = max(ma, vc[i]);
        }
        else
        {
            if (count >= k)
            {
                long long t1 = count - k + 1;
                long long t2 = (t1 * (t1 + 1)) / 2;
                ans += t2;
            }
            count = 0, ma = 0;
            if (vc[i] <= q)
            {
                ma = vc[i];
                count = 1;
            }
        }
    }
    if (count >= k)
    {
        long long t1 = count - k + 1;
        long long t2 = (t1 * (t1 + 1)) / 2;
        ans += t2;
    }
    cout << ans << endl;
    return 0;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}