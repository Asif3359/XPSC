#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string st;
    cin >> st;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'B')
        {
            res++;
            i = i + k - 1;
        }
    }

    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}