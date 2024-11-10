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
        int n;
        cin >> n;
        string binary;
        cin >> binary;

        if (n < 1)
        {
            cout << 0 << "\n";
        }
        else if (n == 1)
        {
            cout << 1 << "\n";
        }

        else
        {
            int st = 0;
            int end = n - 1;
            int mismatched_pairs = 0;

            while (st < end)
            {
                if (binary[st] != binary[end])
                {
                    mismatched_pairs += 2;
                }
                else
                {
                    break;
                }
                st++;
                end--;
            }

            int ans = n - mismatched_pairs;
            cout << ans << "\n";
        }
    }

    return 0;
}
