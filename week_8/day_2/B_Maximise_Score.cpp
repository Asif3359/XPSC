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
        int N;
        cin >> N;

        vector<int> vc(N);
        for (int i = 0; i < N; i++)
        {
            cin >> vc[i];
        }

        int minScore = INT_MAX;

        for (int i = 1; i < N - 1; i++)
        {
            int maxDiff = max(abs(vc[i] - vc[i - 1]), abs(vc[i] - vc[i + 1]));
            minScore = min(minScore, maxDiff);
        }

        minScore = min(minScore, abs(vc[1] - vc[0]));
        minScore = min(minScore, abs(vc[N - 1] - vc[N - 2]));

        cout << minScore << endl;
    }

    return 0;
}
