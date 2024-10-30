#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int x;
        cin >> x;

        int ans = 100 - x;
        int ansFinal;

        if (ans % 10 == 0)
        {
            ansFinal = ans;
        }
        else
        {
            ansFinal = ans - (ans % 10);
        }
        cout << ansFinal << endl;
    }

    return 0;
}
