#include <bits/stdc++.h>
using namespace std;

string distinct_letters(const string &s)
{
    map<char, int> seen;
    string result;

    for (char ch : s)
    {

        if (seen[ch] == 0)
        {
            seen[ch] = 1;
            result += ch;
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int index(string st, char s)
{
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == s)
        {
            return i;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        string disSt = distinct_letters(st);

        int len = disSt.length() - 1;

        for (int i = 0; i < n; i++)
        {
            st[i] = disSt[len - index(disSt, st[i])];
        }

        cout << st << endl;
    }

    return 0;
}
