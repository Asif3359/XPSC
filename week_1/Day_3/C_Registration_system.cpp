#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    vector<string> ve;

    while (n--)
    {
        string name;
        cin >> name;

        if (mp[name] == 0)
        {
            ve.push_back("OK");
            mp[name] = 1;
        }
        else
        {

            int i = mp[name];
            string newName;

            while (true)
            {
                newName = name + to_string(i);
                if (mp[newName] == 0)
                {
                    ve.push_back(newName);
                    mp[newName] = 1;
                    break;
                }
                i++;
            }
            mp[name] = i;
        }
    }

    for (auto x : ve)
    {
        cout << x << endl;
    }

    return 0;
}
