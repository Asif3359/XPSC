#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long long s = 0;
        for (long p = 0; p < n; ++p)
        {
            long x;
            cin >> x;
            if (p == n - 2)
            {
                s -= x;
            }
            else
            {
                s += x;
            }
        }
        cout << s << endl;
    }

    return 0;
}
