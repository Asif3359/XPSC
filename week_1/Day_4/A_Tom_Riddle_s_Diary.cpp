#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {

        if (mp[a[i]] == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        mp[a[i]]++;
    }

    return 0;
}
