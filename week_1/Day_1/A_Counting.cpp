#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;

    if (a >= b)
    {
        ans = 0;
    }
    else
    {
        ans = (b - a) + 1;
    }
    cout << ans << endl;

    return 0;
}
