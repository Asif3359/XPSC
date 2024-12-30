#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // Read number of test cases

    while (T--)
    {
        int N;
        cin >> N; 

        bool possible = false;

        for (int i = 0; i * 3 <= N; i++)
        {
            if ((N - i * 3) % 4 == 0)
            {
                possible = true;
                break;
            }
        }

        if (possible)
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
