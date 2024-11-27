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
        
        sort(st.begin(), st.end());
        
        for (int i = 0; i < n / 2; i++)
        {
            cout << st[i] << st[n - i - 1];
        }
        if (n % 2 == 1)
        {
            cout << st[n / 2];
        }
        cout << endl;
    }
    return 0;
}
