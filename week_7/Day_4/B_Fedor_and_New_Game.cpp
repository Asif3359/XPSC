#include <bits/stdc++.h>
using namespace std;

int dist(int x, int y)
{
    return __builtin_popcount(x ^ y);
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> vc(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> vc[i];
    }

    int x = vc[m];
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        if (dist(vc[i], x) <= k)
        {
            count++;
        }
    }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
