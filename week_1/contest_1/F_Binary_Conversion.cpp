#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;
        string S, T;
        cin >> S >> T;

        // Count discrepancies
        int diff = 0;
        for (int i = 0; i < N; ++i)
        {
            if (S[i] != T[i])
            {
                diff++;
            }
        }

        // Minimum swaps needed
        int min_swaps = (diff + 1) / 2; // Ceiling of diff / 2

        // Check if it's possible to achieve the transformation with exactly K swaps
        if (diff == 0)
        {
            // If no differences, we can only make swaps if K is even (swapping back)
            cout << (K % 2 == 0 ? "YES" : "NO") << endl;
        }
        else if (min_swaps > K)
        {
            // Not enough swaps
            cout << "NO" << endl;
        }
        else
        {
            // Check the parity
            if ((K % 2) == (diff % 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
