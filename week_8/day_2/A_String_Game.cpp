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
        
        string s;
        cin >> s;

        stack<char> stc;
        int count = 0;

        for (char ch : s)
        {
            if (!stc.empty() && stc.top() != ch)
            {
                stc.pop();
                count++;
            }
            else
            {
                stc.push(ch);
            }
        }

        if (count % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }

    return 0;
}
