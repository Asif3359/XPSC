#include <bits/stdc++.h>
using namespace std;

vector<int> ans(vector<int> &arr)
{

    sort(arr.begin(), arr.end());

    vector<int> result;
    int min_diff = INT_MAX;

    for (int i = 0; i < arr.size() - 1; ++i)
    {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < min_diff)
        {
            min_diff = diff;
            result.clear();
        }
        if (diff == min_diff)
        {
            result.push_back(arr[i]);
            result.push_back(arr[i + 1]);
        }
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> result = ans(arr);

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << (i < result.size() - 1 ? " " : "\n");
    }

    return 0;
}