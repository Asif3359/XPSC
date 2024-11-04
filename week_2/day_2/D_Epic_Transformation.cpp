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
        vector<int> vc(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vc[i];
        }

        map<int, int> freq;
        for (int num : vc)
        {
            freq[num]++;
        }

        int maxFreq = 0;
        for (auto x : freq)
        {
            maxFreq = max(maxFreq, x.second);
        }

        if (maxFreq > n / 2)
        {
            cout << (2 * maxFreq - n) << endl;
        }
        else
        {
            cout << (n % 2) << endl;
        }
    }

    return 0;
}
