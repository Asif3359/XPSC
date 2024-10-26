#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;

    vector<bool> str(26, false);

    for (char ch : st)
    {
        str[ch - 'a'] = true;
    }

    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i] << " ";
    // }
    for (int i = 0; i < str.size(); i++)
    {
        if (!str[i])
        {
            char cx = i + 'a';
            cout << cx << endl;
            return 0;
        }
    }
    cout << "None\n";

    return 0;
}
