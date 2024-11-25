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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        int total_cost = 0;
        for (int i = 0; i < n; i++)
        {
            total_cost += min(vc[i] * x, y);
        }

        cout << total_cost << endl;
    }

    return 0;
}
