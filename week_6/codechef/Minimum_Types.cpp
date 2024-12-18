#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        vector<pair<int, int>> coins(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> coins[i].first;
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> coins[i].second;
        }

        sort(coins.rbegin(), coins.rend());

        int totalValue = 0;
        int distinctTypes = 0;
        for (const auto &coin : coins)
        {
            if (totalValue >= X)
            {
                break;
            }
            int value = coin.first;
            int count = coin.second;
            totalValue += value * count;
            distinctTypes++;
        }

        if (totalValue < X)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << distinctTypes << '\n';
        }
    }

    return 0;
}
