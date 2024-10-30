#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int N, K;
        cin >> N >> K; // Length of the string and number of operations
        string S, T;
        cin >> S >> T; // Binary strings S and T

        int mismatches = 0;

        // Count the number of mismatched positions
        for (int i = 0; i < N; i++)
        {
            if (S[i] != T[i])
            {
                mismatches++;
            }
        }

        // Check the conditions for conversion
        if (mismatches > K)
        {
            cout << "NO" << endl; // Too many mismatches
        }
        else if (mismatches == K || (K - mismatches) % 2 == 0)
        {
            cout << "YES" << endl; // Exact matches or can use extra even swaps
        }
        else
        {
            cout << "NO" << endl; // Odd remaining swaps when mismatches < K
        }
    }

    return 0;
}
