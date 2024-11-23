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

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }

        int lefMax = -1, rigMax = -1;
        bool canWin = false;

        for (int i = 0; i < N; i++)
        {
            if (i == 0)
            {
                rigMax = *max_element(A.begin() + 1, A.end());
            }
            else if (i == N - 1)
            {
                rigMax = -1;
            }
            else
            {
                rigMax = max(rigMax, A[i]);
            }

            int bobScore = max(lefMax, rigMax);
            if (i > 0)
            {
                bobScore = max(bobScore, B[i - 1]);
            }
            if (i < N - 1)
            {
                bobScore = max(bobScore, B[i + 1]);
            }

            int aliceScore = max(A[i], B[i]);

            if (aliceScore > bobScore)
            {
                canWin = true;
                break;
            }

            lefMax = max(lefMax, A[i]);
        }

        cout << (canWin ? "Yes" : "No") << "\n";
    }

    return 0;
}
