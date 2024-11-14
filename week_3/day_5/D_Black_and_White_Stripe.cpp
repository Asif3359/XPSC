#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string st;
    cin >> st;
    int res = 0;
    int i = 0;

    while (i < k)
    {
        if (st[i] == 'B')
            res++;
        i++;
    }
    int count = res;
    while (i < n)
    {
        if (st[i] == 'B')
            count++;
        if (st[i - k] == 'B')
            count--;
        if (count > res)
            res = count;
        i++;
    }
    cout << k - res << endl;
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