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
        vector<int> vc(N);
        for (int i = 0; i < N; i++)
        {
            cin >> vc[i];
        }

        int stoer = 0, s = 0;

        for (int i = N - 1; i >= 0; i--)
        {
            if (vc[i] > stoer)
            {
                stoer = vc[i];
            }
            else
            {
                s++;
            }
        }
        cout << s << "\n";
    }

    return 0;
}
