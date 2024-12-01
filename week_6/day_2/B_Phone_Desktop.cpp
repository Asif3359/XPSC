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
        int x, y;
        cin >> x >> y;

        int ans = (y + 1) / 2;
        int remaining = ((y / 2) * 7) + ((y % 2) * 11);
        int st = max(0, x - remaining);

        ans += (st + 14) / 15;
        cout << ans << endl;
    }

    return 0;
}
