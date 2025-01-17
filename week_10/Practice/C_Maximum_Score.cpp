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

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int score = 0;

        for (int i = 0; i < N - 1; ++i)
        {
            if (A[i] != A[i + 1])
            {
                score++;
                i++;
            }
        }

        cout << score << "\n";
    }

    return 0;
}
