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
        long long n;
        cin >> n;

        vector<long long> a(n);
        long long maxOdd = -1;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                maxOdd = max(maxOdd, a[i]);
            }
        }

        if (maxOdd == -1)
        {
            cout << 0 << "\n";
            continue;
        }

        sort(a.begin(), a.end());

        long long operations = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
            {
                if (a[i] < maxOdd)
                {
                    operations++;
                    maxOdd += a[i];
                }
                else
                {
                    operations += 2;
                    maxOdd += a[i] + a[n - 1];
                }
            }
        }

        cout << operations << "\n";
    }

    return 0;
}
