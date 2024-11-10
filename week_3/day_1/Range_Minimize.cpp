#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> vc(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        sort(vc.begin(), vc.end());

        int p1 = vc[n - 1] - vc[2];
        int p2 = vc[n - 3] - vc[0];
        int p3 = vc[n - 2] - vc[1];

        int mini = min(p1, p2);
        int ans = min(p3, mini);
        
        cout << ans << endl;
    }

    return 0;
}
