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
        int m, x, y;
        cin >> m >> x >> y;

        int ans = (m - y > 0) ? (m - y + x - 1) / x + 1 : 1;

        cout << ans << endl;
    }

    return 0;
}
