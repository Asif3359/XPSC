#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int t)
{
    int n;
    long long X;
    cin >> n >> X;

    vector<long long> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }

    vector<bool> ok_height(n + 1, false);
    for (int i = 1; i <= n - 1; ++i)
    {
        if (b[i] % b[i + 1] == 0)
        {
            ok_height[i] = true;
        }
    }

    bool flag = false;
    for (int i = 1; i <= n; ++i)
    {
        flag |= (a[i] <= X);
    }

    int answer = (flag ? 1 : 0);
    int start = 0;
    long long collect_fruits = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (ok_height[i] && !ok_height[i - 1])
        {
            start = i - 1;
            collect_fruits = a[i];
        }
        else
        {
            collect_fruits += a[i];
        }

        while (start < n && X < collect_fruits)
        {
            collect_fruits -= a[++start];
        }

        if (ok_height[i] || ok_height[i - 1])
        {
            answer = max(answer, i - start);
        }
    }

    cout << answer;
    if (t != 1000)
    {
        cout << "\n";
    }
}

int main()
{
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; ++t)
    {
        solve(t);
    }

    return 0;
}
