#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = a & b;
        int result = (a ^ x) + (b ^ x);
        cout << result << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
