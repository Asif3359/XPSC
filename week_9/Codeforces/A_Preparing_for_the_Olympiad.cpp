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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        int maxDiff = 0;

        for (int i = 0; i < n; ++i)
        {

            int s;
            if (i + 1 < n)
            {
                s = b[i + 1];
            }
            else
            {
                s = 0;
            }

            int g = a[i] - s;

            if (g > 0)
            {
                maxDiff += g;
            }
        }

        cout << maxDiff << endl;
    }

    return 0;
}
