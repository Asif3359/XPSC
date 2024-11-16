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

        string st;
        cin >> st;
        int count1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (st[i] = '1' && st[i] != st[i + 1])
            {
                count1++;
            }
        }

        cout << count1/2 << endl;
    }

    return 0;
}
