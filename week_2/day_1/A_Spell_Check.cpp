#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string target = "Timur";
    sort(target.begin(), target.end());

    while (t--)
    {
        int n;
        cin >> n;
        string ts;
        cin >> ts;

        if (n != target.length())
        {
            cout << "NO\n";
            continue;
        }

        sort(ts.begin(), ts.end());

        if (ts == target)
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
