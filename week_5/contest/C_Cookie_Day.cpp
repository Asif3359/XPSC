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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (*max_element(a.begin(), a.end()) < k)
        {
            cout << "-1\n";
        }
        else
        {
            vector<int> ans;

            for (int jar : a)
            {
                if (jar >= k)
                {
                    ans.push_back(jar % k);
                }
            }

            cout << *min_element(ans.begin(), ans.end()) << "\n";
        }
    }

    return 0;
}
