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
        int n, x, y;
        cin >> n >> x >> y;

        int a1 = n * x;
        int a2 = (n / 2) * y;
        int a3 = (n / 2) * y + (n % 2) * x;

        int ans = max({a1, a2, a3});
        cout << ans << endl;
    }

    return 0;
}
