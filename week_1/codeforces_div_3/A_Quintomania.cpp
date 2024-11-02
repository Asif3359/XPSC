#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> vc(N);

        for (int i = 0; i < N; i++)
        {
            cin >> vc[i];
        }

        bool isPerfect = true;

        for (int i = 1; i < N; i++)
        {
            int x = abs(vc[i] - vc[i - 1]);

            if (x != 5 && x != 7)
            {
                isPerfect = false;
                break;
            }
        }

        if (isPerfect)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
