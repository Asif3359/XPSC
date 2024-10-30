#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int odd = 0;
        int even = 0;

        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                if (N % i == 0)
                {
                    even++;
                }
            }
            else
            {
                if (N % i == 0)
                {
                    odd++;
                }
            }
        }

        if (odd == even)
        {
            cout << 0 << endl;
        }
        else if (odd < even)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
