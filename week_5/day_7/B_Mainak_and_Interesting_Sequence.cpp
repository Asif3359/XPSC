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
        long long nof, nsum;
        cin >> nof >> nsum;
        if (nof > nsum || (nof % 2 == 0 && nsum % 2 == 1))
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            if (nof % 2 == 1)
            {

                for (int i = 1; i < nof; i++)
                {
                    cout << "1 ";
                    nsum--;
                }
                cout << nsum << endl;
            }
            else
            {
                for (int i = 1; i < nof - 1; i++)
                {
                    cout << "1 ";
                    nsum--;
                }
                cout << nsum / 2 << " " << nsum / 2 << endl;
            }
        }
    }
    return 0;
}