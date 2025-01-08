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
        vector<int> A(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int score = 0;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] > score)
            {
                cout << 1 << " ";
                score = A[i];
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
