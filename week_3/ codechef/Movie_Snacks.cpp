#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int ans1 = (2 * z) + y;
    int ans2 = (2 * x) + (3 * y);

    int ans = min(ans1, ans2);
    cout << ans << endl;

    return 0;
}
