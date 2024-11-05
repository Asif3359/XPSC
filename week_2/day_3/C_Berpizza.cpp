#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    set<pair<int, int>> s1, s2;
    map<int, set<int>> mp;

    int index = 1;

    for (int i = 1; i <= q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int m;
            cin >> m;
            s1.insert({index, m});
            s2.insert({m, index});
            mp[m].insert(index++);
        }
        if (type == 2)
        {
            pair<int, int> p = *s1.begin();
            s1.erase(s1.begin());
            s2.erase({p.second, p.first});
            cout << p.first << " ";
        }
        if (type == 3)
        {
            pair<int, int> p = *s2.rbegin();
            int k = *mp[p.first].begin();
            cout << k << " ";
            s2.erase({p.first, k});
            s1.erase({k, p.first});
            mp[p.first].erase(mp[p.first].begin());
        }
    }

    return 0;
}
