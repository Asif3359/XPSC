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
        string st;
        getline(cin, st);

        int n, k;
        cin >> n >> k;

        vector<int> vc(n);
        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
            mp[vc[i]].push_back(i);
        }

        // for (auto [x, y] : mp)
        // {
        //     cout << x << " - ";
        //     for (auto val : y)
        //     {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }

        for (int i = 0; i < k; i++)
        {
            int aj, bj;
            cin >> aj >> bj;

            if (mp.find(aj) != mp.end() && mp.find(bj) != mp.end())
            {

                int Aj = mp[aj].front();
                int Bj = mp[bj].back();

                if (Aj <= Bj)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
