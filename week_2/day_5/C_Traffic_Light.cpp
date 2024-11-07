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
        char c;
        cin >> c;
        string st;
        cin >> st;
        st = st + st;

        int green = st.size();
        int ans = 0;
        for (int i = st.size() - 1; i >= 0; i--)
        {
            if (st[i] == 'g')
            {
                green = i;
            }

            if (st[i] == c)
            {
                ans = max(ans, green - i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
