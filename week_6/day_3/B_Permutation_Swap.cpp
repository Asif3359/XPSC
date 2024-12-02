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
        long g = 0;
        for (long p = 1; p <= n; ++p)
        {
            long x;
            cin >> x;
            long diff = abs(p - x);
            g = __gcd(g, diff);
        }
        cout << g << endl;
    }

    return 0;
}
