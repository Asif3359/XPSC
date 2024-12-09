#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int total = 1 << n; // 2^n
    for (int i = 0; i < total; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)
        {
            if ((i & (1 << j)) != 0)
            {
                sum += a[j];
            }
            else
            {
                sum -= a[j];
            }
        }

        if (sum % 360 == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}
