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
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int score = 0;
        for (const auto &entry : freq)
        {
            score += entry.second / 2;
        }

        cout << score << '\n'; 
    }

    return 0;
}
