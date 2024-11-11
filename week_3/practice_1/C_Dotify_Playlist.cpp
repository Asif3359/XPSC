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
        int N, K, L;
        cin >> N >> K >> L;

        vector<int> vc;

        for (int i = 0; i < N; ++i)
        {
            int M, Li;
            cin >> M >> Li;
            if (Li == L)
            {
                vc.push_back(M);
            }
        }

        if (vc.size() < K)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(vc.rbegin(), vc.rend());

            int maxLength = 0;
            for (int i = 0; i < K; i++)
            {
                maxLength += vc[i];
            }

            cout << maxLength << endl;
        }
    }

    return 0;
}