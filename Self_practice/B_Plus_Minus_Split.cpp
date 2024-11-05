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
        string st;
        cin >> st;

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            map<char, int> mp;
            for (int i = 0; i < n; i++)
            {
                mp[st[i]]++;
            }

            int cn = mp['-'];
            int cn1 = mp['+'];

            int val = min(cn, cn1);

            cout << n - (val * 2) << endl;
        }
    }

    return 0;
}
