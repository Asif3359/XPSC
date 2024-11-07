#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> a(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        while (q--)
        {
            int x;
            cin >> x;

            if (x <= a[0])
            {
                cout << a[0] - 1 << "\n";
            }
            else if (x >= a[m - 1])
            {
                cout << n - a[m - 1] << "\n";
            }
            else
            {
                int right = upper_bound(a.begin(), a.end(), x) - a.begin();
                int left = right - 1;

                int dist_left = x - a[left];
                int dist_right = a[right] - x;

                cout << abs(dist_left - dist_right) / 2 + min(dist_left, dist_right) << "\n";
            }
        }
    }

    return 0;
}
