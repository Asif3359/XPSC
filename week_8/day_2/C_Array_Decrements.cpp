#include <bits/stdc++.h>
#define ll long long int
#define MOD 1e9 + 7

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr1(n), arr2(n), diff(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        set<ll> set1, set2;

        for (ll i = 0; i < n; i++)
        {
            ll diffVal = arr1[i] - arr2[i];
            if (arr2[i] > 0)
            {
                set1.insert(diffVal);
            }
            else
            {
                set2.insert(arr1[i]);
            }
        }

        if (set1.empty())
        {
            cout << "YES";
        }
        else if (set1.size() == 1 && *(set1.begin()) >= 0)
        {
            if (set2.empty() || (*(set2.rbegin()) <= *(set1.begin())))
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}
