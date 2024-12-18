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
        int N, M, K;
        cin >> N >> M >> K;

        int minimum = INT_MAX;

        for (int l = 1; l <= N; ++l)
        {
            for (int w = 1; w <= M; ++w)
            {
                int x = 2 * (l + w);
                int d = abs(x - K);
                minimum = min(minimum, d);
            }
        }

        cout << minimum << endl;
    }

    return 0;
}
