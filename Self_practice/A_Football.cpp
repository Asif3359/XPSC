#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st;
    cin >> st;
    int count = 1;
    bool isden = false;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == st[i + 1])
        {
            count++;
            if (count >= 7)
            {
                isden = true;
                break;
            }
        }
        else
        {
            count = 1;
        }
    }
    if (isden)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
