#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;

    cin >> x >> y >> z;

    double team1 = x + (y * 0.5);
    double t1 = team1 + 4 - (x + y + z);
    double t2 = 0.5 * y + z;

    if (t1 > t2)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
