#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long long int> arr(n);

    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(arr.begin(), arr.end());
        for (long long int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 2 == 0)
            {
                sum -= arr[i];
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
