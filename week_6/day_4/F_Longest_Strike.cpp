#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

ll solve()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    ll temp;

    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }

    ll l = -1, count = 0, maxo = 0, final_l = -1;

    for (auto x : mp)
    {
        if (x.second >= k)
        {
            if (count == 0)
            {
                l = x.first;
                count = 1;
            }
            else
            {
                if (x.first == l + count)
                {
                    count++;
                }
                else
                {
                    if (count > maxo)
                    {
                        maxo = count;
                        final_l = l;
                    }
                    l = x.first;
                    count = 1;
                }
            }
        }
        else
        {
            if (count > maxo)
            {
                maxo = count;
                final_l = l;
            }
            count = 0;
        }
    }

    if (count > maxo)
    {
        maxo = count;
        final_l = l;
    }

    if (final_l == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << final_l << " " << final_l + maxo - 1 << endl;
    }

    return 0;
}

int main()
{
    ll TestCase = 1;
    cin >> TestCase;

    while (TestCase--)
    {
        solve();
    }

    return 0;
}
