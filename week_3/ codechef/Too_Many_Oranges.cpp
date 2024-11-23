#include <iostream>
using namespace std;

bool isPossible(int N, int K)
{
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N - i; j++)
        {
            int l = N - i - j;
            if (i * 10 + j * 11 + l * 12 == K)
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        if (isPossible(N, K))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
