#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (A > B)
    {
        int ans = A - B;
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
