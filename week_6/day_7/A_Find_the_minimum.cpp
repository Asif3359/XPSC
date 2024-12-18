#include <bits/stdc++.h>
using namespace std;

int minimumDistances(const vector<int> &a)
{
    unordered_map<int, int> lastIndex;
    int minDistance = INT_MAX;

    for (int i = 0; i < a.size(); i++)
    {
        if (lastIndex.find(a[i]) != lastIndex.end())
        {
            int distance = i - lastIndex[a[i]];
            minDistance = min(minDistance, distance);
        }
        lastIndex[a[i]] = i;
    }

    return (minDistance == INT_MAX) ? -1 : minDistance;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = minimumDistances(arr);
    cout << result << endl;

    return 0;
}