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

        vector<int> vc(n);

        for (int i = 0; i < n; i++)
        {
            vc[i] = i + 1;
        }

        vector<pair<int, int>> vp;

        for (int i = 0; i < n - 1; i++)
        {
            auto it = vc.end();
            it--;
            int x = *it;
            vc.erase(it);

            it--;
            int y = *it;
            vc.erase(it);

            vp.push_back({x, y});

            vc.push_back((x + y + 1) / 2);
        }

        cout << vc[0] << endl;
        for (auto [x, y] : vp)
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}

// 1 2 3 4