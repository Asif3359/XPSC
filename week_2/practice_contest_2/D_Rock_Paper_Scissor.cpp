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

        string A;
        cin >> A;
        string B;
        cin >> B;

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++)
        {

            if ((A[i] == 'R' && B[i] == 'P') ||
                (A[i] == 'S' && B[i] == 'R') ||
                (A[i] == 'P' && B[i] == 'S'))
            {
                cnt2++;
            }
            else if ((A[i] == 'R' && B[i] == 'S') ||
                     (A[i] == 'P' && B[i] == 'R') ||
                     (A[i] == 'S' && B[i] == 'P'))
            {
                cnt1++;
            }
        }

        int num = 0;
        if (cnt2 >= cnt1)
        {
            num = ((cnt1 + cnt2) / 2) + 1;
            cout << num - cnt1 << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}
