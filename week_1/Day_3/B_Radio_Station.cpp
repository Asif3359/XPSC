#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<string, string>> stV;

    for (int i = 0; i < n; ++i)
    {
        string name, ip;
        cin >> name >> ip;
        stV.push_back({ip, name});
    }

    for (int i = 0; i < m; ++i)
    {
        string name2, ip2;
        cin >> name2 >> ip2;

        string ip = ip2.substr(0, ip2.size() - 1);

        string st = "";
        for (auto &s : stV)
        {
            if (s.first == ip)
            {
                st = s.second;
                break;
            }
        }

        cout << name2 << " " << ip2 << " #" << st << endl;
    }

    return 0;
}
