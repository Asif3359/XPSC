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

        vector<int> vc;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (vc[i] > 0)
            {
                sum += vc[i];
            }
        }

        if (sum == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int left = 0, right = n - 1;

            while (left < n)
            {
                if (vc[left] <= 0)
                {
                    left++;
                }
                else
                {
                    break;
                }
            }

            while (right >= 0)
            {
                if (vc[right] <= 0)
                {
                    right--;
                }
                else
                {
                    break;
                }
            }

            int cnt = 0;
            for (int i = left + 1; i < right; i++)
            {
                if (vc[i] < 0)
                {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
