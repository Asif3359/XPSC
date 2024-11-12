#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int n, m;
    cin >> n >> m;

    vector<long long int> a(n), b(m);
    for (long long int i = 0; i < n; i++)
        cin >> a[i];
    for (long long int j = 0; j < m; j++)
        cin >> b[j];

    long long int i = 0, j = 0;
    long long result = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            long long int countA = 0, countB = 0;
            long long int currentA = a[i];
            while (i < n && a[i] == currentA)
            {
                countA++;
                i++;
            }

            long long int currentB = b[j];
            while (j < m && b[j] == currentB)
            {
                countB++;
                j++;
            }

            result += (countA)*countB;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << result << endl;
    return 0;
}
