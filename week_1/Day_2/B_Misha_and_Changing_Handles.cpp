#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<string, string> &a, const pair<string, string> &b)
{
    return a.second < b.second;
}

int main()
{
    int q;
    cin >> q;

    vector<pair<string, string>> handle;

    for (int i = 0; i < q; ++i)
    {
        string Old, New;
        cin >> Old >> New;

        bool found = false;
        for (auto &st : handle)
        {
            if (st.second == Old)
            {
                st.second = New;
                found = true;
                break;
            }
        }

        if (!found)
        {
            handle.push_back({Old, New});
        }
    }

    sort(handle.begin(), handle.end(), cmp);
    cout << handle.size() << endl;
    for (const auto &st : handle)
    {
        cout << st.first << " " << st.second << endl;
    }

    return 0;
}
