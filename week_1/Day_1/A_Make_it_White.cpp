#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string st1;
        cin >> st1;

        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            if (st1[start] == 'B')
            {
                break;
            }
            start++;
        }
        int start1 = 0;
        while (start1 < end)
        {
            if (st1[end] == 'B')
            {
                break;
            }
            end--;
        }

        cout << end - start + 1 << endl;
    }

    return 0;
}
