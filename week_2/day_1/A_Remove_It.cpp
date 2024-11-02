#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int N;
    cin >> N;
    vector<int> arr(N);

    int terget;
    cin >> terget;
    vector<int> arr2;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] != terget)
        {
            arr2.push_back(arr[i]);
        }
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
