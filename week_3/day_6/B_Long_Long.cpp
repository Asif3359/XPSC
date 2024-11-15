#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;

    while (t--)
    {

        long long int n;
        cin >> n;
        vector<long long int> vc(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }
        long long int sum = 0;
        long long int t = 0;
        long long int op = 0;
        bool flag = false;
        for (long long int i = 0; i < n; i++)
        {
            sum += abs(vc[i]);

            if (vc[i] < 0)
            {
                t++;
                flag = true;
            }
            else if (vc[i] == 0 && flag)
            {
                t++;
            }
            else
            {
                if (t != 0)
                {
                    op++;
                }
                t = 0;
                flag = false;
            }
        }
        if (t != 0)
        {
            op++;
        }

        cout << sum << ' ' << op << '\n';
    }

    return 0;
}
