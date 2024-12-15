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
        string a;
        cin >> a;

        reverse(a.begin(), a.end());

        for (char &c : a)
        {
            if (c == 'p')
            {
                c = 'q';
            }
            else if (c == 'q')
            {
                c = 'p';
            }
        }

        cout << a << endl;
    }

    return 0;
}
