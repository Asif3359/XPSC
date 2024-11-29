#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        int bx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            bx = (bx ^ arr[i]);
        }

        int ans = bx;
        for (int i = 0; i < n; i++)
        {
            ans = min(bx ^ arr[i], ans);
        }

        cout << ans << '\n';
    }

    return 0;
}