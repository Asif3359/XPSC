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
        int a, b, n;
        cin >> a >> b >> n;
        long long int ans = b, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x < a)
            {
                ans += x;
            }
            else
            {
                ans += (a - 1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
