#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;

        string result;
        for (int i = n - 1; i >= 0;)
        {
            if (st[i] == '0')
            {
                int num = (st[i - 2] - '0') * 10 + (st[i - 1] - '0');
                result.push_back('a' + (num - 1));
                i -= 3;
            }
            else
            {
                int num = st[i] - '0';
                result.push_back('a' + (num - 1));
                i--;
            }
        }

        reverse(result.begin(), result.end());
        cout << result << endl;
    }

    return 0;
}
