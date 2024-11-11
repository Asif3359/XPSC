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

        vector<vector<int>> vc(n, vector<int>(n - 1));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> vc[i][j];
            }
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int last_elem = vc[i].back();
            mp[last_elem]++;
        }

        bool found = false;
        for (int i = 0; i < n; i++)
        {
            int last_elem = vc[i].back();
            if (mp[last_elem] == 1)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    cout << vc[i][j] << " ";
                }
                found = true;
                break;
            }
        }

        for (const auto &entry : mp)
        {
            if (entry.second > 1)
            {
                cout << entry.first << endl;
                break;
            }
        }
    }

    return 0;
}


