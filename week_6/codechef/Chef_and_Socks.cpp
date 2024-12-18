#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, X, Y;
    cin >> A >> X >> Y;

    int ans = X + Y;

    if (ans >= A)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
