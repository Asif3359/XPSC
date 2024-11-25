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

        string a, b, c;
        cin >> a >> b >> c;

        bool flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] and b[i] != c[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
