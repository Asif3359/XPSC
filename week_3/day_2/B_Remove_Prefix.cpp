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

        vector<int> vc;
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }

        for (int i = vc.size() - 1; i >= 0; i--)
        {
            int val = vc[i];

            if (!(st.find(val) == st.end()))
            {
                break;
            }
            st.insert(val);
        }
        cout << vc.size() - st.size() << endl;
    }

    return 0;
}
