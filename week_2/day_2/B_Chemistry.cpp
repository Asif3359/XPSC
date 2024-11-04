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
        long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        long cnt = 0;
        for (auto [ch, count] : mp)
        {
            if (count % 2 != 0)
            {
                cnt++;
            }
        }

        if (cnt <= k + 1)
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
