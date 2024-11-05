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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int left = 0;
        int right = n - 1;

        int mini = 1;
        int maxi = n;

        while (left <= right)
        {
            if (a[left] == mini)
            {
                left++;
                mini++;
            }
            else if (a[left] == maxi)
            {
                left++;
                maxi--;
            }
            else if (a[right] == mini)
            {
                right--;
                mini++;
            }
            else if (a[right] == maxi)
            {
                right--;
                maxi--;
            }
            else
            {
                break;
            }
        }

        if (left <= right)
        {
            cout << left + 1 << " " << right + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
