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

        vector<int> vc(n * 2);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
            vc[n + i] = vc[i];
        }

        bool isYes = false;

        for (int i = 1; i <= n; i++)
        {
            bool flag = true;
            for (int j = 1; j < n; j++)
            {
                if (vc[i + j] < vc[i + j - 1])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                isYes = true;
                cout << "YES\n";
                break;
            }
        }

        if (!isYes)
        {
            cout << "NO\n";
        }
    }

    return 0;
}
