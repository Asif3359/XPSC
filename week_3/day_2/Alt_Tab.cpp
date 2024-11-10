#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> vc;
    set<string> stSet;

    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        vc.push_back(st);
    }

    for (int i = vc.size() - 1; i >= 0; i--)
    {
        // cout << vc[i][vc[i].length() - 1] << vc[i][vc[i].length() - 2] << "";
        string st = vc[i];
        if (stSet.find(st) == stSet.end())
        {
            stSet.insert(st);
            cout << vc[i][vc[i].length() - 2] << vc[i][vc[i].length() - 1] << "";
        }
    }

    return 0;
}
