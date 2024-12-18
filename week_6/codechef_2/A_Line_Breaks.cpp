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
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }

        int curLen = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (curLen + words[i].length() <= m)
            {
                curLen += words[i].length();
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
