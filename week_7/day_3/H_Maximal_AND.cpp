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
        long long int n, k;
        cin >> n >> k;
        long long int result = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int i = 0; i < 31; i++)
            {
                if (x & 1)
                    mp[i]++;
                x = (x >> 1);
            }
        }

        for (int i = 30; i >= 0; i--)
        {
            int y = n - mp[i];
            if (k >= y)
            {
                result += pow(2, i);
                k -= y;
            }
        }
        cout << result << endl;
    }

    return 0;
}
