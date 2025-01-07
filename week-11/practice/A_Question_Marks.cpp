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
        string s;
        cin >> s;

        map<char, int> mp;
        int Q = 0;

        for (char c : s)
        {
            if (c == '?')
            {
                Q++;
            }
            else
            {
                mp[c]++;
            }
        }

        int Ans = 0;
        for (char option : {'A', 'B', 'C', 'D'})
        {
            int correct = min(n, mp[option]);
            Ans += correct;
            Q -= (n - correct);
        }

        if (Q > 0)
        {
            Ans += Q;
        }

        cout << Ans << endl;
    }

    return 0;
}
