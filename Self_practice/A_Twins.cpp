#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> ve(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ve[i];
        sum = sum + ve[i];
    }

    sort(ve.rbegin(), ve.rend());

    int ans = 0;
    int count = 0;

    while (ans <= sum)
    {
        ans = ans + ve[count];
        sum = sum - ve[count];
        count++;
    }
    cout << count << endl;

    return 0;
}
