#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> vc(n);
    set<int> seen;

    for (int i = n - 1; i >= 0; i--)
    {
        seen.insert(a[i]);
        vc[i] = seen.size();
    }

    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        cout << vc[l - 1] << endl;
    }

    return 0;
}
