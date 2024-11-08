#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        set<int> indices;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            indices.insert(x);
        }

        string c;
        cin >> c;

        sort(c.begin(), c.end());

        int i = 0;
        for (auto it : indices)
        {
            s[it - 1] = c[i];
            i++;
        }
        cout << s << endl;
    }

    return 0;
}