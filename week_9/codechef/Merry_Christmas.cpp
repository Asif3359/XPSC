#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    vector<int> vc = {1, 2, 4};
    int count = 0;

    for (int val : vc)
    {
        if (x >= val)
        {
            x -= val;
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
