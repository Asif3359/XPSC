#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int testCase;
    cin >> testCase;
    while (testCase--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<long long int> s(k);
        for (long long int i = 0; i < k; i++)
        {
            cin >> s[i];
        }
        if (k == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<long long int> v(n);
            long long int j = n - 1;
            for (long long int i = k - 1; i >= 1; i--)
            {
                v[j] = s[i] - s[i - 1];
                j--;
            }
            while (j >= 0)
            {
                v[j] = v[j + 1];
                s[0] -= v[j];
                j--;
            }

            v[0] += s[0];
            if (is_sorted(v.begin(), v.end()))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
