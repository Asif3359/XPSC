#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        int total_ones = 0;
        bool has_different = false;

        for (int i = 0; i < N; ++i)
        {
            if (A[i] == '1' || B[i] == '1')
                total_ones++;
            if (A[i] != B[i])
                has_different = true;
        }

        if (total_ones % 2 == 1 || has_different)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
