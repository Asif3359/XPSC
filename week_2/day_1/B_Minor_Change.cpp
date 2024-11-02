#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st;
    string ts;

    cin >> st >> ts;

    int count = 0;

    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] != ts[i])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
