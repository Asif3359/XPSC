#include <bits/stdc++.h>
using namespace std;

int calculatecount(long long health)
{
    int count = 0;
    while (health > 1)
    {

        long long ldvr = 1;
        for (long long i = 2; i * i <= health; ++i)
        {
            if (health % i == 0)
            {
                ldvr = health / i;
                break;
            }
        }

        if (ldvr == 1)
        {
            health = 1;
        }
        else
        {
            health = ldvr;
        }
        count++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        long long H, K;
        cin >> H >> K;

        long long count = H * K;
        int mdf = calculatecount(count);

        cout << mdf << "\n";
    }

    return 0;
}
