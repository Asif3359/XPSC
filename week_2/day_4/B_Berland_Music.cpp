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
        vector<int> p(n);
        vector<pair<int, int>> li, dl;
        string s;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                li.push_back({p[i], i});
            }
            else
            {
                dl.push_back({p[i], i});
            }
        }

        sort(li.begin(), li.end());
        sort(dl.begin(), dl.end());

        vector<int> q(n);

        int index = 1;

        for (auto [rating, i] : dl)
        {
            q[i] = index++;
        }
        for (auto [rating, i] : li)
        {
            q[i] = index++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
