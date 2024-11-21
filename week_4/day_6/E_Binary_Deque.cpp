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
        long n, s;
        cin >> n >> s;

        vector<long> v(1, -1);

        for (long p = 0; p < n; p++)
        {
            int x;
            cin >> x;
            if (x)
            {
                v.push_back(p);
            }
        }

        v.push_back(n);

        if (v.size() < s + 2)
        {
            cout << "-1\n";
            continue;
        }

        long mxlen = 0;
        for (long p = s; p + 1 < v.size(); p++)
        {
            long len = (v[p + 1] - 1) - v[p - s];
            mxlen = max(mxlen, len);
        }

        cout << n - mxlen << "\n";
    }

    return 0;
}
