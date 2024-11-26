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
        long long int n;
        cin >> n;

        cout << n / 2 + n % 2 << endl;

        long long int i = 1, j = 3 * n;

        while (i < j)
        {
            cout << i << " " << j << endl;

            i += 3;
            j -= 3;
        }
        cout << endl;
    }

    return 0;
}