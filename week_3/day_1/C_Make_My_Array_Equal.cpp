#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> vc(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }
        sort(vc.rbegin(), vc.rend());

        set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (vc[i] != 0)
            {
                st.insert(vc[i]);
            }
        }

        if (st.size() <= 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
