#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> B[i];
        }

        int ans = 0;
        for (int i = 0; i < N; ++i)
        {
            if (B[i] <= 2 * A[i] && A[i] <= 2 * B[i])
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
