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
        vector<int> a(n);
        map<long long int, long long int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        long long int ans = 0;
        for (auto i : mp)
        {
            ans += max(0LL, i.second - mp[i.first - 1]);
        }
        cout << ans << endl;
    }

    return 0;
}
