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
        int h, l, b;
        cin >> h >> l >> b;

        int khetrofol = 2 * (l * b + b * h + l * h);

        int ans = 1000 / khetrofol;
        cout << ans << endl;
    }

    return 0;
}
