#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int mxsize = 0;

        for (int i = 0; i < N; i++)
        {
            int cursum = 0;

            for (int j = i; j < N; j++)
            {
                cursum += arr[j];
                if (cursum % 2 == 0)
                {
                    mxsize = max(mxsize, j - i + 1);
                }
            }
        }

        cout << mxsize << endl;
    }

    return 0;
}
