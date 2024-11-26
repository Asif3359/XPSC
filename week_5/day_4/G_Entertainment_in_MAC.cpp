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
        string s;
        cin >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s <= rev)
        {
            if (n % 2 == 0)
            {
                cout << s << "\n";
            }
            else
            {
                cout << s << rev << "\n";
            }
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << rev << "\n";
            }
            else
            {
                cout << rev << s << "\n";
            }
        }
    }

    return 0;
}