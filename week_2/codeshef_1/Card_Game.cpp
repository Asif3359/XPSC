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
        int n, x;
        cin >> n >> x;

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (x != i)
            {
                int sum = x + i;
                if (sum % 2 == 0)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
