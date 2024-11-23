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
        int n, m;
        cin >> n >> m;

        vector<int> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        vector<int> vc1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> vc1[i];
        }

        int count = 0;

        for (int i = 0; i < m; i++)
        {
            int type = vc1[i] - 1;
            // cout << type << " ";
            if (vc[type] > 0)
            {
                vc[type]--;
            }
            else
            {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
