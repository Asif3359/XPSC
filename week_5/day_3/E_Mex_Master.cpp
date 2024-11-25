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
        long zeroCount = 0;
        bool hasOne = false, hasLarge = false;

        for (long i = 0; i < n; ++i)
        {
            long x;
            cin >> x;

            if (x == 0)
            {
                ++zeroCount;
            }
            else if (x == 1)
            {
                hasOne = true;
            }
            else if (x > 1)
            {
                hasLarge = true;
            }
        }

        long result = 0;
        if (zeroCount > (n + 1) / 2)
        {
            if (!hasOne || hasLarge)
            {
                result = 1;
            }
            else
            {
                result = 2;
            }
        }

        cout << result << endl;
    }

    return 0;
}
