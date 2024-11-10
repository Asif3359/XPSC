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
        int n, m, h;
        cin >> n >> m >> h;

        vector<long long int> car;
        vector<long long int> wat;

        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            car.push_back(x);
        }
        for (long long int i = 0; i < m; i++)
        {
            long long int x;
            cin >> x;
            wat.push_back(x);
        }

        sort(car.rbegin(), car.rend());
        sort(wat.rbegin(), wat.rend());

        long long int total = 0;

        for (long long int i = 0; i < min(n, m); i++)
        {
            total = total + min(car[i], wat[i] * h);
        }
        cout << total << endl;
    }

    return 0;
}
