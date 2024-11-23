#include <bits/stdc++.h>
using namespace std;

bool isValid(const vector<int> &A, int N, int K, int mid)
{
    int changes = 0;
    int low = A[0] - mid;
    int high = A[0] + mid;

    for (int i = 1; i < N; i++)
    {
        int newLow = A[i] - mid;
        int newHigh = A[i] + mid;
        if (newHigh < low || newLow > high)
        {
            changes++;
            low = newLow;
            high = newHigh;
        }
        else
        {
            low = max(low, newLow);
            high = min(high, newHigh);
        }
        if (changes > K)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        int low = 0, high = 1e9, result = 1e9;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (isValid(A, N, K, mid))
            {
                result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << result << "\n";
    }

    return 0;
}
