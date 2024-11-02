#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, vector<int>> vc;
        for (int i = 0; i < k; i++)
        {
            int brand, cost;
            cin >> brand >> cost;
            vc[brand].push_back(cost);
        }

        vector<int> vc1;

        for (auto v : vc)
        {
            vector<int> costs = v.second;

            int sum = 0;
            for (int i = 0; i < costs.size(); i++)
            {
                sum += costs[i];
            }
            vc1.push_back(sum);
        }

        sort(vc1.rbegin(), vc1.rend());

        int maxAns = 0;
        for (int i = 0; i < min(n, (int)vc1.size()); i++)
        {
            maxAns += vc1[i];
        }

        cout << maxAns << endl;
    }
    return 0;
}
