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
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        map<int, int> mp;

        for (int i = 0; i < N; ++i)
        {
            int returnDay = A[i];
            int penalty = i + 1;
            mp[returnDay] = max(mp[returnDay], penalty);
        }

        int ans = 0;
        for (auto val : mp)
        {
            ans += val.second;
        }
        cout << ans << endl;
    }

    return 0;
}
