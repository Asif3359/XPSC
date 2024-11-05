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
        int x;
        cin >> x;

        if (x < 2)
        {
            cout << 0 << endl;
        }
        else
        {
            float days = x - 1;
            int ans = ceil(days / 7);
            cout << ans << endl;
        }
    }

    return 0;
}
