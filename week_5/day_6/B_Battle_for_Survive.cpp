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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        if (n == 2)
        {
            cout << v[1] - v[0] << "\n";
            continue;
        }
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += v[i];
        }

        int key = v[n - 2];
        cout << -2 * key + sum << "\n";
    }

    return 0;
}
