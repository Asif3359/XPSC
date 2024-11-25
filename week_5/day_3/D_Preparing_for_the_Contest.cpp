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
        long long int n, k;
        cin >> n >> k;
        vector<long long int> vc;
        for (long long int i = 0; i < k; i++)
        {
            vc.push_back(n - i);
        }
        for (long long int i = 0; i < (n - k); i++)
        {
            vc.push_back(i + 1);
        }
        for (long long int i = n - 1; i >= 0; i--)
        {
            cout << vc[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
