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
        string s;
        cin >> s;

        vector<long long int> gain;
        long long int total = 0;
        int change = 0;

        for (int i = 0; i < n; i++)
        {
            long long int L = i;
            long long int R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    change++;
                    total += R;
                    gain.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
            else
            {
                if (L > R)
                {
                    change++;
                    gain.push_back(L - R);
                    total += L;
                }
                else
                {
                    total += R;
                }
            }
        }

        vector<long long int> ans(n + 1);
        for (int i = change; i <= n; i++)
        {
            ans[i] = total;
        }

        sort(gain.rbegin(), gain.rend());

        for (int i = change - 1; i >= 1; i--)
        {
            total -= gain.back();
            gain.pop_back();
            ans[i] = total;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
