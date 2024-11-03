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

        vector<int> state(n);

        for (int i = 0; i < n; i++)
        {
            cin >> state[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string move;
            cin >> move;

            for (int j = 0; j < x; j++)
            {
                if (move[j] == 'D')
                {
                    state[i] = (state[i] + 1) % 10;
                }
                else if (move[j] == 'U')
                {
                    state[i] = (state[i] + 9) % 10;
                }
            }
        }

        for (auto st : state)
        {
            cout << st << " ";
        }
        cout << endl;
    }

    return 0;
}
