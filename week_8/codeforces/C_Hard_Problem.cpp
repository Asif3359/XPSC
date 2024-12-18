#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long int m, a, b, c;
        cin >> m >> a >> b >> c;

        long long int r1 = min(m, a);

        long long int r2 = min(m, b);

        long long int rem_r1 = m - r1;
        long long int rem_r2 = m - r2;

        long long int forc = min(c, rem_r1 + rem_r2);

        long long int ans = r1 + r2 + forc;

        cout << ans << endl;
    }

    return 0;
}
