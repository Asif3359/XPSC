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
        long long n, m;
        cin >> n >> m;
        vector<long long> v(n);
        long long sum = 0;

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] = v[i] + i + 1;
        }

        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum > m)
            {
                cout << i << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << n << endl;
        }
    }

    return 0;
}
