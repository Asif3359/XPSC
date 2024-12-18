#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    vector<string> results;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_sum += a[i];
        }

        if (total_sum % n != 0)
        {
            results.push_back("NO");
            continue;
        }

        long long target = total_sum / n;
        bool possible = true;

        long long even_diff = 0;
        for (int i = 0; i < n; i += 2)
        {
            even_diff += a[i] - target;
        }

        long long odd_diff = 0;
        for (int i = 1; i < n; i += 2)
        {
            odd_diff += a[i] - target;
        }

        if (even_diff != 0 || odd_diff != 0)
        {
            possible = false;
        }

        results.push_back(possible ? "YES" : "NO");
    }

    for (const string &result : results)
    {
        cout << result << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
