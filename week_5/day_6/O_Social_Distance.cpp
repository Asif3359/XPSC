#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    int cnt = 0;
    int ans = 0;
    bool hasOne = false;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            if (!hasOne)
            {
                ans += cnt / (k + 1);
            }
            else
            {
                ans += max(0, (cnt - k) / (k + 1));
            }
            cnt = 0;
            hasOne = true;
        }
        else
        {
            cnt++;
        }
    }

    if (!hasOne)
    {
        ans += (cnt + k) / (k + 1);
    }
    else
    {
        ans += cnt / (k + 1);
    }

    cout << ans << endl;
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