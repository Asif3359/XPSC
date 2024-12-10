#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cout << "YES" << endl;
            return;
        }
        else if (s[i] != t[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}
