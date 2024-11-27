#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> sc(N);
        for (int i = 0; i < N; i++)
        {
            cin >> sc[i];
        }

        int smS = accumulate(sc.begin(), sc.end(), 0);
        int tm = (N + 1) * 100;
        int requiredMarks = (tm + 1) / 2;

        if (smS >= requiredMarks)
        {
            cout << 0 << endl;
        }
        else
        {
            int needed = requiredMarks - smS;
            if (needed > 100)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << needed << endl;
            }
        }
    }

    return 0;
}
