#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    long long int a, b, n, s, ans;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> a >> b >> n >> s;

        long long int d = s / n;
        d = min(d, a);

        if (s - n * d <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
