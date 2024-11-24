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
        string str = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> mp;
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]] = 0;
        }
        vector<int> vc(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];

            for (auto it : mp)
            {
                if (it.second == vc[i])
                {
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
