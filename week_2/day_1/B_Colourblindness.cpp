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
        bool isIden = 0;
        string st, ts;
        cin >> st >> ts;

        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == 'R' && ts[i] != 'R')
            {
                isIden = 1;
                break;
            }
            else if (ts[i] == 'R' && st[i] != 'R')
            {
                isIden = 1;
                break;
            }
        }

        if (isIden)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
