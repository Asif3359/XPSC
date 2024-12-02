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
        long long int n;
        cin >> n;
        vector<long long int> vc(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        long long int sum = 0, ans = 0, mx = 0;
        for (long long int i = 0; i < n; i++)
        {
            mx = max(mx, vc[i]);
            sum += vc[i];
            if (mx == sum - mx)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
