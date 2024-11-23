#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long mod_exp(long long base, long long exp, int mod)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

long long mod_inv(long long a, int mod)
{
    return mod_exp(a, mod - 2, mod);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, D;
        cin >> N >> D;
        vector<int> piles(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> piles[i];
        }

        long long total_outcomes = static_cast<long long>(D) * D % MOD;

        long long favorable_outcomes = (D * (D + 1) / 2) % MOD;

        long long P = favorable_outcomes;
        long long Q = total_outcomes;

        long long result = P * mod_inv(Q, MOD) % MOD;

        cout << result << endl;
    }
    return 0;
}
