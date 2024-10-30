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

    for (int i = n - 1; i >= 0; --i)
    {

        if (mp[a[i]] == 0)
        {
            cout << a[i] << endl;
        }
        mp[a[i]]++;
    }

    return 0;
}
