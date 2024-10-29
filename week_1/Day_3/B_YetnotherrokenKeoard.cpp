#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;

        reverse(st.begin(), st.end());

        int B = 0, b = 0;
        string finalSt;

        for (char ch : st)
        {
            if (ch == 'B')
            {
                B++;
                continue;
            }
            else if (ch == 'b')
            {
                b++;
                continue;
            }
            else if (b > 0 && islower(ch))
            {
                b--;
                continue;
            }
            else if (B > 0 && isupper(ch))
            {
                B--;
                continue;
            }

            finalSt += ch;
        }

        reverse(finalSt.begin(), finalSt.end());
        cout << finalSt << endl;
    }

    return 0;
}
