#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> arr(n);
        vector<long long int> pref(n);

        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        pref[0] = arr[0];
        for (long long int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + arr[i];
        }

        long long int count = n - 1;
        long long ans = 0;

        for (long long int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {

                while (count > i && s[count] != 'R')
                {
                    count--;
                }
                if (count > i)
                {

                    ans += pref[count] - (i > 0 ? pref[i - 1] : 0);
                    count--;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
