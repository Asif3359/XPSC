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

        priority_queue<long long int> pq;

        long long int sum = 0;

        for (long long int i = 0; i < n; i++)
        {
            if (vc[i] != 0)
            {
                pq.push(vc[i]);
            }
            else if (vc[i] == 0)
            {
                if (!pq.empty())
                {
                    sum = sum + pq.top();
                    pq.pop();
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
