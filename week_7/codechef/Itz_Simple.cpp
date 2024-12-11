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
        sort(vc.begin(), vc.end());

        int xsum = x + vc[n - 1];
        int ysum = y;

        for (int i = 0; i < n - 1; i++)
        {
            ysum += vc[i];
        }

        if (xsum > ysum)
        {
            cout << "Ved\n";
        }
        else if (xsum < ysum)
        {
            cout << "Varun\n";
        }
        else
        {
            cout << "Equal\n";
        }
    }

    return 0;
}
