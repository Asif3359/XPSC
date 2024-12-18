#include <bits/stdc++.h>
using namespace std;

vector<int> missingNumbers(const vector<int> &arr, const vector<int> &brr)
{
    map<int, int> count_arr;
    map<int, int> count_brr;

    for (int num : arr)
    {
        count_arr[num]++;
    }

    for (int num : brr)
    {
        count_brr[num]++;
    }

    vector<int> missing;

    for (const auto &entry : count_brr)
    {
        int num = entry.first;
        if (count_arr[num] < entry.second)
        {
            missing.push_back(num);
        }
    }

    sort(missing.begin(), missing.end());

    return missing;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;

    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> brr[i];
    }

    vector<int> result = missingNumbers(arr, brr);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}