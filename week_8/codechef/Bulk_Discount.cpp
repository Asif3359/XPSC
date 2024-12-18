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
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());
        long long total = 0;
        for (int i = 0; i < N; i++)
        {
            total += max(A[i] - i, 0);
        }
        cout << total << endl;
    }

    return 0;
}
