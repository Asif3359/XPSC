#include <bits/stdc++.h>
using namespace std;

bool isIn110(const string &s, int pos)
{
    if (pos < 0 || pos + 3 >= s.size())
        return false;
    return s[pos] == '1' && s[pos + 1] == '1' && s[pos + 2] == '0' && s[pos + 3] == '0';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int q;
        cin >> q;

        set<int> stSet;

        for (int i = 0; i + 3 < s.size(); ++i)
        {
            if (isIn110(s, i))
            {
                stSet.insert(i);
            }
        }

        while (q--)
        {
            int i;
            char v;
            cin >> i >> v;
            --i;

            for (int j = i - 3; j <= i; ++j)
            {
                if (isIn110(s, j))
                {
                    stSet.erase(j);
                }
            }

            s[i] = v;

            for (int j = i - 3; j <= i; ++j)
            {
                if (isIn110(s, j))
                {
                    stSet.insert(j);
                }
            }

            cout << (stSet.empty() ? "NO" : "YES") << endl;
        }
    }
    return 0;
}
