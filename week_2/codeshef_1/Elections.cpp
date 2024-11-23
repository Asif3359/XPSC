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
        vector<int> A(n), B(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }

        int aw = 0;
        vector<int> Aloss;

        for (int i = 0; i < n; i++)
        {
            if (A[i] > B[i])
            {
                aw++;
            }
            else
            {
                Aloss.push_back(B[i] - A[i] + 1);
            }
        }

        sort(Aloss.begin(), Aloss.end());

        for (int votes_needed : Aloss)
        {
            if (aw > n / 2)
                break;
            if (x >= votes_needed)
            {
                x -= votes_needed;
                aw++;
            }
            else
            {
                break;
            }
        }

        if (aw > n / 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
