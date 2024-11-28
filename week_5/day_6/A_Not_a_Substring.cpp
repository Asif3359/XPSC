#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "()")
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            string ans1, ans2;

            for (size_t i = 0; i < s.size(); ++i)
            {
                ans1 += "()";
            }

            for (size_t i = 0; i < s.size(); ++i)
            {
                ans2 += "(";
            }
            for (size_t i = 0; i < s.size(); ++i)
            {
                ans2 += ")";
            }

            if (ans1.find(s) == string::npos)
            {
                cout << ans1 << '\n';
            }
            else
            {
                cout << ans2 << '\n';
            }
        }
    }

    return 0;
}
