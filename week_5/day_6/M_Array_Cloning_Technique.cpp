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

        vector<int> v(n);

        int mx = -INT_MIN;

        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            map[v[i]]++;
            mx = max(mx, map[v[i]]);
        }

        if (mx == n)
        {
            cout << "0" << endl;
            continue;
        }

        int number = n - mx;
        int operation = 0;
        int count = mx;
        while (number > 0)
        {
            operation++;
            if (number > count)
            {
                operation += count;
            }
            else
            {
                operation += number;
            }
            number -= count;
            count *= 2;
        }

        cout << operation << endl;
    }

    return 0;
}
