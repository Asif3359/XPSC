#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string st;
        cin >> st;

        string finalst = "";

        int fIndex = 0;
        for (int i = 0; i < st.length(); i++)
        {

            if (st[i] == st[i - 1])
            {
                break;
            }
            finalst += st[i];
            fIndex++;
        }

        if (finalst[finalst.length() - 1] == 'z')
        {
            finalst += finalst[finalst.length() - 1] - 25;
        }
        else
        {
            finalst += finalst[finalst.length() - 1] + 1;
        }

        for (int i = fIndex; i < st.length(); i++)
        {

            finalst += st[i];
        }

        cout << finalst << endl;
    }

    return 0;
}
