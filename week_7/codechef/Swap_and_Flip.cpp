#include <iostream>
#include <string>
using namespace std;

bool solve(const string &S, const string &T, int N)
{
    if (N == 1)
    {
        return S == T;
    }

    int onesS = 0, onesT = 0;
    for (int i = 0; i < N; ++i)
    {
        if (S[i] == '1') onesS++;
        if (T[i] == '1') onesT++;
    }

    return (onesS % 2) == (onesT % 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string S, T;
        cin >> S >> T;

        cout << (solve(S, T, N) ? "YES\n" : "NO\n");
    }

    return 0;
}
