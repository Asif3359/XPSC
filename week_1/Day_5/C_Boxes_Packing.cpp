#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    map<int, int> occ;

    for (int x : v)
    {
        occ[x]++;
    }

    int count = 0;

    for (auto oc : occ)
    {
        count = max(count, oc.second);
    }

    cout << count << endl;

    return 0;
}
